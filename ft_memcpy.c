/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-16 16:09:06 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-16 16:09:06 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	ind;

	ind = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (ind < n && dst != src)
	{
		((char *)dst)[ind] = ((char *)src)[ind];
		ind++;
	}
	return (dst);
}
