/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonka <ykonka@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-22 09:54:53 by ykonka            #+#    #+#             */
/*   Updated: 2025-03-22 09:54:53 by ykonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_initialization(size_t *i, int *k, int *begin)
{
	*i = 0;
	*k = 0;
	*begin = -1;
}

static void	*ft_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (((s[i] != c) && flag == 0))
		{
			count++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static char	*ft_divide_words(const char *s, int start, int end)
{
	int		i;
	char	*sub_array;

	i = 0;
	sub_array = (char *)malloc((end - start + 1) * sizeof(char));
	if (!sub_array)
	{
		return (NULL);
	}
	while (start < end)
	{
		sub_array[i] = s[start];
		i++;
		start++;
	}
	sub_array[i] = 0;
	return (sub_array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	int		k;
	int		begin;

	ft_initialization(&i, &k, &begin);
	array = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && begin < 0)
			begin = i;
		else if ((s[i] == c || i == ft_strlen(s)) && begin >= 0)
		{
			array[k] = ft_divide_words(s, begin, i);
			if (!array[k])
				return (ft_free(array, k));
			begin = -1;
			k++;
		}
		i++;
	}
	array[k] = 0;
	return (array);
}
