/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:42:22 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:42:23 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd, int free_buffer)
{
	static char	*buffer;
	char		*line;

	if (free_buffer)
	{
		free(buffer);
		return (NULL);
	}
	if (!BUFFER_SIZE || BUFFER_SIZE < 0 || fd < 0)
		return (NULL);
	buffer = ft_read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_read_next_buffer(buffer);
	return (line);
}

char	*ft_read_buffer(int fd, char *buffer)
{
	int		readret;
	char	*str;

	readret = 1;
	str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	while (!ft_strchr_gnl(buffer, '\n') && readret != 0)
	{
		readret = read(fd, str, BUFFER_SIZE);
		if (readret < 0)
		{
			free(str);
			return (NULL);
		}
		str[readret] = '\0';
		buffer = ft_strjoin_gnl(buffer, str);
	}
	free(str);
	return (buffer);
}

char	*ft_get_line(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (!buffer || !buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		str[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		str[i] = buffer[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read_next_buffer(char *buffer)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen_g(buffer) - i + 1));
	if (!str)
		return (NULL);
	i++;
	while (buffer[i])
		str[j++] = buffer[i++];
	str[j] = '\0';
	free(buffer);
	return (str);
}
