/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-01 12:15:31 by ykonka            #+#    #+#             */
/*   Updated: 2025-05-01 12:15:31 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	void *f_return;
	head = NULL;
	while (lst != NULL)
	{
		f_return = f(lst->content);
		if (f_return == NULL)
		{
			ft_lstclear(&head, del);
			break;
		}
		node = ft_lstnew(f_return);
		if (node == NULL)
		{
			del(f_return);
			ft_lstclear(&head, del);
			break;
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
