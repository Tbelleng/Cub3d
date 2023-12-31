/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:54:55 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:54:56 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction itoa convertit un int en une string terminée par un caractère '\0'
 * Il peut également convertir des nombres négatifs en une string.
*/

static int	len_num(long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		i++;
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*res;

	nb = n;
	len = len_num(n);
	if (n < 0)
		nb *= -1;
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb == 0)
		res[0] = '0';
	else
	{
		while (len--, nb)
		{
			res[len] = (nb % 10) + '0';
			nb = (nb - (nb % 10)) / 10;
		}
		if (n < 0)
			res[len] = '-';
	}
	return (res);
}

/*
int	main(void)
{
	printf("\n************** FT_ITOA *************\n");
	printf("\n'42' : %s\n", ft_itoa(42));
	printf("'-42' : %s\n", ft_itoa(-42));
	printf("'0' : %s\n", ft_itoa(0));
	printf("'123456789' : %s\n", ft_itoa(123456789));
	printf("'75' : %s\n", ft_itoa(75));
	printf("\n************************************\n\n");
}
*/
