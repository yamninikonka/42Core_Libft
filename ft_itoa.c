/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-22 10:24:29 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-22 10:24:29 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cal_str_len_from_int(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*main_logic(char *str_int, size_t s_len, long l_n)
{
	if (l_n == 0)
	{
		str_int[0] = '0';
		return (str_int);
	}
	if (l_n < 0)
	{
		str_int[0] = 45;
		l_n *= -1;
	}
	while (l_n != 0)
	{
		str_int[s_len--] = (l_n % 10) + 48;
		l_n /= 10;
	}
	return (str_int);
}

char	*ft_itoa(int n)
{
	char	*str_int;
	size_t	s_len;
	long	l_n;

	s_len = cal_str_len_from_int(n);
	str_int = (char *)malloc(sizeof(char) * s_len + 1);
	l_n = n;
	if (!str_int)
		return (NULL);
	str_int[s_len--] = '\0';
	str_int = main_logic(str_int, s_len, l_n);
	return (str_int);
}
