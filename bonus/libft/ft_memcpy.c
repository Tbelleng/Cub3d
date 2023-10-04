/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:53:51 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:53:52 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La  fonction memcpy() copie n octets depuis la zone mémoire src 
 * vers la zone mémoire dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*destcp;
	const char		*srccp;

	destcp = dest;
	srccp = src;
	if (dest == NULL && src == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		destcp[i] = srccp[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dst[sizeof(src)];

	src = "11";
	printf("\n****** RETURN 1 POUR TRUE && RETURN 0 POUR FALSE ********\n");
	ft_memcpy(dst, src, sizeof(src));
	printf("* \tFt_Memcpy : %d\t\t\t\t\t*\n",
		ft_memcpy(dst, src, sizeof(src)) == dst);
	printf("* \tFt_Memcmp verif si aucune différence : %d\t*\n",
		ft_memcmp(src, dst, sizeof(src)) == 0);
	printf("*********************************************************\n\n");
	return (0);
}*/
