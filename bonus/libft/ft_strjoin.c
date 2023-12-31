/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:52:48 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:52:49 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction strjoin crée une chaîne composée de l'élément *s1 concaténé avec 
 * l'élément *s2 et la chaine renvoyer et alloué dynamiquement avec malloc.
*/

char	*ft_strjoin(char *buffer, char *str)
{
	char	*mstr;
	int		i;
	int		j;

	if (!buffer)
	{
		buffer = (char *)malloc(sizeof(char) * 1);
		if (!buffer)
			return (NULL);
		buffer[0] = '\0';
	}
	if (!str || !buffer)
		return (NULL);
	mstr = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(str) + 1));
	if (!mstr)
		return (free(buffer), NULL);
	i = -1;
	while (buffer[++i])
		mstr[i] = buffer[i];
	j = 0;
	while (str[j])
		mstr[i++] = str[j++];
	mstr[i] = '\0';
	free(buffer);
	return (mstr);
}

/*int	main(void)
{
	char	*str;
	char	*str2;
	char	*ft;

	printf("\n************** FT_STRJOIN *************\n");
	str = "Mouslim";
	str2 = " de 42";
	ft = ft_strjoin(str, str2);
	printf("\nDéclaration pré-requis :\n");
	printf("str = \"Mouslim\"\n");
	printf("str2 = \" de 42\"\n");
	printf("\nTest de la fonction :\n");
	printf("Résultat attendu : Mouslim de 42\n");
	printf("Retour de ft_strjoin : %s\n", ft);
	printf("\n***************************************\n\n");
}*/
