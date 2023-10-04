/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:46:50 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:46:51 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Alloue (avec malloc(3)) et renvoie un nouvel
élément. La variable membre ’content’ est
initialisée à l’aide de la valeur du paramètre ’content’. 
La variable ’next’ est initialisée à NULL.
Return : Le nouvel element avec le content donner en parametre.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

/*
int	main(void)
{
	t_list	*noeux1;
	t_list	*noeux2;

	noeux1 = ft_lstnew("First Content");
	noeux2 = ft_lstnew("Second Content");
	noeux1->next = noeux2;
	printf("Noeud 1 : \"%s\"\n", (char *)(noeux1->content));
	printf("Noeud 1 --> Noeud 2 : \"%s\"\n", (char *)noeux1->next->content);
}
*/