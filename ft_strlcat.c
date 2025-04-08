/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-16 12:11:01 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-16 12:11:01 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	return_len;

	dst_len = ft_strlen(dst);
	if (dstsize > dst_len)
	{
		return_len = dst_len + ft_strlen(src);
		dstsize = dstsize - dst_len - 1;
		while (dstsize > 0 && *src)
		{
			dst[dst_len] = *src;
			src++;
			dst_len++;
			dstsize--;
		}
		dst[dst_len] = '\0';
	}
	else
	{
		return_len = dstsize + ft_strlen(src);
	}
	return (return_len);
}
