/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-16 12:32:22 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-16 12:32:22 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*src_cpy = src;

	if (dstsize-- > 0)
	{
		while (dstsize-- > 0 && *src)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (ft_strlen(src_cpy));
}
