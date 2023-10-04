/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:42:51 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:42:54 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction strtrim supprime tous les caractères donner en deuxieme 
 * paramétre de la fonction du début et de la fin d'une chaîne de caractère
 * donner via le premier parametre.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1 + beg);
	if (end)
		while (s1[end + beg - 1] && ft_strchr(set, s1[end + beg - 1]))
			end--;
	str = (char *)malloc(sizeof(char) * end + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + beg, end + 1);
	str[end] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	*ft;

	printf("\n****** Ft_STRTRIM ******\n");
	ft = ft_strtrim("-42Paris-", "-");
	printf("Avant : \"-42Paris-\" ");
	printf("Aprés ft_strtrim(\"-42Paris-\", \"-\") : %s\n", ft);
	ft = ft_strtrim("    ", " ");
	printf("Avant : '    ' Aprés ft_strtrim(\"    \", \" \") : '%s'\n", ft);
	printf("************************\n\n");
}
*/