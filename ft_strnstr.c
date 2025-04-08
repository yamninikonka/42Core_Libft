/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-16 12:39:01 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-16 12:39:01 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (*needle)
	{
		while (len > 0 && *haystack != '\000' && len >= n_len)
		{
			if (ft_strncmp(haystack, needle, n_len) == 0)
			{
				return ((char *)haystack);
			}
			haystack++;
			len--;
		}
		return (NULL);
	}
	else
	{
		return ((char *)haystack);
	}
}
