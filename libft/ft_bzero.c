/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:48:28 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:48:29 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction bzero met a 0 ('\0') les n (taille en parametre) -> 
 * 1ers octets du bloc pointe par *s
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
 * CODE DETAILLE
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
 *
*/

/*
int	main(void)
{
	char	un[10] = "Hello!";
	char	deux[10] = "Hello!";

	printf("\nDisplay above Bzero : %s\n", un);
	ft_bzero(un, 1);
	printf("Display after Bzero : %s\n", un);
	printf("________________\n\n");
	printf("Display above Ft_Bzero : %s\n", deux);
	ft_bzero(deux, 1);
	printf("Display after Ft_Bzero : %s\n\n", deux);
	return (0);
}
*/
