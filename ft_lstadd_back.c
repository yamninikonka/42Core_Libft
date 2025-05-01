/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-27 14:29:17 by ykonka            #+#    #+#             */
/*   Updated: 2025-04-27 14:29:17 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	while (last != NULL && new != NULL)
	{
		if (last->next == NULL)
		{
			last->next = new;
			break ;
		}
		last = last->next;
	}
	if (last == NULL && new != NULL)
	{
		*lst = new;
	}
}
