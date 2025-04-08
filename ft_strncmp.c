/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-15 14:41:01 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-15 14:41:01 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	while (s1[ind] && s2[ind] && ind < n)
	{
		if (s1[ind] != s2[ind])
		{
			return ((unsigned char)s1[ind] - (unsigned char)s2[ind]);
		}
		ind++;
	}
	if (ind == n)
	{
		return (0);
	}
	return ((unsigned char)s1[ind] - (unsigned char)s2[ind]);
}
