/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-16 16:04:15 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-16 16:04:15 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			ind;
	unsigned char	*ptr;

	ind = 0;
	ptr = b;
	if (len > 0)
	{
		while (ind++ < len)
		{
			*ptr++ = c;
		}
	}
	return (b);
}
