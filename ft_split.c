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

static size_t	get_c_count(char const *s, char c)
{
	size_t	count;
	int		ind;

	count = 0;
	ind = 0;
	while (s[ind])
	{
		if (s[ind] == c & s[ind - 1] != s[ind])
			count++;
		ind++;
	}
	return (count);
}

static char	*clean_and_remove_duplicates(char const *s, char c)
{
	char	*cleaned_s;
	char	*cleaned_s_temp;
	char	*trimmed_s;
	int		ind;

	trimmed_s = ft_strtrim(s, &c);
	ind = 0;
	if (!trimmed_s)
	{
		return (NULL);
	}
	if (trimmed_s[ind] == '\0')
	{
		free(trimmed_s);
		return (NULL);
	}
	cleaned_s = malloc(sizeof(char) * (ft_strlen(trimmed_s) + 1));
	if (!cleaned_s)
	{
		free(trimmed_s);
		return (NULL);
	}
	cleaned_s_temp = cleaned_s;
	*cleaned_s++ = trimmed_s[ind++];
	while (trimmed_s[ind])
	{
		if (trimmed_s[ind - 1] == c && trimmed_s[ind] == c)
		{
			ind++;
			continue ;
		}
		*cleaned_s++ = trimmed_s[ind++];
	}
	*cleaned_s = '\0';
	return (cleaned_s_temp);
}

void	*free_str_arr(char **str_arr)
{
	while (*str_arr != NULL)
	{
		free(*str_arr);
		*str_arr = NULL;
		str_arr++;
	}
	// free(str_arr);
	return (NULL);
}

char	**main_logic(char **str_arr, char *prev_str, char *curr_str, char c,
		int count)
{
	char	**temp;

	temp = str_arr;
	if (str_arr == NULL)
		return (NULL);
	while (curr_str != NULL)
	{
		*str_arr = ft_substr(prev_str, 0, (ft_strlen(prev_str)
					- ft_strlen(curr_str)));
		if (*str_arr == NULL)
		{
			return (free_str_arr(str_arr));
		}
		curr_str++;
		prev_str = curr_str;
		str_arr++;
		count--;
		curr_str = ft_strchr(prev_str, c);
	}
	*str_arr = ft_substr(prev_str, 0, ft_strlen(prev_str));
	str_arr++;
	*str_arr = NULL;
	return (temp);
}
char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	char	*prev_str;
	char	*curr_str;
	char	*cleaned_s;
	int		count;
	char	**result;

	cleaned_s = clean_and_remove_duplicates(s, c);
	if (cleaned_s != NULL)
	{
		prev_str = cleaned_s;
		curr_str = ft_strchr(cleaned_s, c);
		count = get_c_count(cleaned_s, c) + 2;
		str_arr = (char **)malloc(sizeof(char *) * count);
		result = main_logic(str_arr, prev_str, curr_str, c, count);
		if (result == NULL)
		{
			free(cleaned_s);
			free(str_arr);
			return (NULL);
		}
		free(cleaned_s);
	}
	else
	{
		str_arr = (char **)malloc(sizeof(char *) * 1);
		*str_arr = NULL;
	}
	return (str_arr);
}
