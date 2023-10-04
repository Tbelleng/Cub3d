/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:54:24 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:54:25 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	while (lst)
	{
		temp = lst->next;
		(*f)(lst->content);
		lst = temp;
	}
}
