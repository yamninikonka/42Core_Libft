/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-22 09:31:52 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-22 09:31:52 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed_str;
	size_t	begining;
	size_t	end;

	begining = 0;
	end = ft_strlen(s1) - 1;
	if (*s1)
	{
		while (s1[begining])
		{
			if (ft_strchr(set, s1[begining]) == NULL)
				break ;
			begining++;
		}
		while (s1[end])
		{
			if (ft_strchr(set, s1[end]) == NULL)
				break ;
			end--;
		}
	}
	trimed_str = ft_substr(s1, begining, end - begining + 1);
	return (trimed_str);
}
