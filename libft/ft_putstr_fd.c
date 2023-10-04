/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:43:55 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:43:56 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

/*
 * Ecrit une chaine de caractère du premier parametre (*s) sur le file descriptor
 * donné en deuxieme paramétre.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		while (*s)
			ft_putchar_fd(*s++, fd);
}

/*
int	main(void)
{
	int	fd;

	printf("\n******** Test de ft_putstr_fd ********\n'premier test':\n");
	ft_putstr_fd("premier test", 1);
	printf("\n******** Test ecriture dans un fichier 'testfilestr' ********");
	printf("\nEcriture de : mouslim\n");
	fd = open("testfilestr", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("mouslim", fd);
	close(fd);
	printf("\nChaine de caractere ecrit dans le fichier 'testfilestr' : ");
	printf("\n");
	system("cat testfilestr");
	return (0);
}
*/
