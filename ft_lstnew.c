/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-17 15:10:43 by ykonka            #+#    #+#             */
/*   Updated: 2025-04-17 15:10:43 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_t_list;

	new_t_list = (t_list *)malloc(sizeof(t_list) * 1);
	if (new_t_list == NULL)
		return (NULL);
	new_t_list->content = content;
	new_t_list->next = NULL;
	return (new_t_list);
}
