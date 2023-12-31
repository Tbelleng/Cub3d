/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:54:07 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:54:08 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compte le nombre d’éléments de la liste.
Return : Taille de la liste donner en parametre.
*/

int	ft_lstsize(t_list *lst)
{
	int	result;

	result = 0;
	while (lst != NULL)
	{
			result++;
			lst = lst->next;
	}
	return (result);
}

/*
int	main(void)
{
	t_list	*noeud1;
	t_list	*noeud2;
	t_list	*noeud3;

	noeud1 = ft_lstnew("1");
	noeud2 = ft_lstnew("2");
	noeud3 = ft_lstnew("3");
	noeud1->next = noeud2;
	noeud2->next = noeud3;
	printf("\n[1er noeud] Contenue de la Liste : \"%s\"\n",
		(char *)noeud1->content);
	printf("[2eme noeud] Contenue de la Liste : \"%s\"\n",
		(char *)noeud1->next->content);
	printf("[3eme noeud] Contenue de la Liste : \"%s\"\n",
		(char *)noeud2->next->content);
	printf("\nNombre d'element de la liste : \"%d\"\n\n", ft_lstsize(noeud1));
}
*/
