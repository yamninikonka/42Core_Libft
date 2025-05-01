/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-27 12:34:16 by ykonka            #+#    #+#             */
/*   Updated: 2025-04-27 12:34:16 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*rotate;

	size = 0;
	rotate = lst;
	while (rotate != NULL)
	{
		size++;
		rotate = rotate->next;
	}
	return (size);
}
