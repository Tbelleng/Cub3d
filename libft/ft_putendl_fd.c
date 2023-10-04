/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:44:04 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:44:05 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Ecrit la string du parametre (*s) sur le file descriptor donné
 * en deuxieme paramétre suivi d'un retour a la ligne.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*
int	main(void)
{
	printf("\n******** FT_PUTENDL_FD ********\n'test':\n");
	ft_putendl_fd("test", 1);
}
*/
