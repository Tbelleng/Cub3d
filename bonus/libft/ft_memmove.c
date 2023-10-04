/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:53:46 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:53:47 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Cette fonction memmove permet de copier un bloc de mémoire spécifié par le 
 * paramètre src dans un nouvel emplacement désigné par le paramètre dest.
 * en indiquant le nombre d'octet a copier au parametre n.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}
