/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-15 12:04:32 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-15 12:04:32 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = (int)ft_strlen(s);
	if (s[s_len] == (unsigned char)c)
	{
		return ((char *)&s[s_len]);
	}
	s_len--;
	while (s_len >= 0 && s[s_len])
	{
		if (s[s_len] == (unsigned char)c)
		{
			return ((char *)&s[s_len]);
		}
		s_len--;
	}
	return (NULL);
}
