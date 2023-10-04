/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:53:05 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:53:06 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

/*
 * DESCRIPTION : La fonction strchr() renvoie un pointeur sur la premiere
 * occurrence du caractere c dans la chaine *s.
 *
 * RETOUR : Un pointeur sur le caractere correspondant ou NULL si non trouve.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
		s++;
	if (*s == (char) c)
		return ((char *)s);
	return (NULL);
}

/*
int	main(void)
{
	printf("\n****** FT_STRCHR ********\n");
	printf("ft_strchr(\"mouslim\", 's')\nReturn : %s\n\n",
		ft_strchr("mouslim", 's'));
	printf("ft_strchr(\"mouslim\", 0)\nReturn : %s\n",
		ft_strchr("mouslim", 0));
	printf("\nstrchr(\"mouslim\", 's')\nReturn : %s\n\n",
		strchr("mouslim", 's'));
	printf("strchr(\"mouslim\", 0)\nReturn : %s\n",
		strchr("mouslim", 0));
	printf("*************************\n");
}
*/