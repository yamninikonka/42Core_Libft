/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-21 11:22:37 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-21 11:22:37 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc_mem;

	calloc_mem = ((void *)malloc(count * size));
	if (calloc_mem == NULL)
		return (NULL);
	ft_bzero(calloc_mem, count * size);
	return (calloc_mem);
}
