/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-22 08:57:03 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-22 08:57:03 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		ind;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ind = 0;
	if (start < ft_strlen(s))
	{
		sub_str = ft_calloc(len + 1, sizeof(char));
		if (!sub_str)
			return (NULL);
		while (s[start] && len-- > 0)
			sub_str[ind++] = s[start++];
	}
	else
	{
		sub_str = (char *)ft_calloc(1, sizeof(char));
		if (!sub_str)
			return (NULL);
	}
	sub_str[ind] = '\0';
	return (sub_str);
}
