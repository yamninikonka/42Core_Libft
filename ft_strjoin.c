/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-22 09:21:21 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-22 09:21:21 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	char	*temp;

	concat_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (concat_str == NULL)
		return (NULL);
	temp = concat_str;
	while (*s1)
	{
		*temp++ = *s1++;
	}
	while (*s2)
	{
		*temp++ = *s2++;
	}
	*temp = '\0';
	return (concat_str);
}
