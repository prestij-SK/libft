/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:11:41 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 10:11:42 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_from_set(const char *set, char c)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		++set;
	}
	return (0);
}

static size_t	get_diff(ssize_t start, ssize_t end)
{
	int	i;

	if (start >= end)
		i = 0;
	else
		i = sizeof(char) * (end - start) + 1;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	ssize_t	start;
	ssize_t	end;
	size_t	i;
	char	*str_trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_from_set(set, s1[start]))
		++start;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && s1[end] && is_from_set(set, s1[end]))
		--end;
	i = get_diff(start, end);
	str_trim = (char *)malloc(i + 1);
	if (!str_trim)
		return (NULL);
	i = 0;
	while (start <= end)
		str_trim[i++] = s1[start++];
	str_trim[i] = '\0';
	return (str_trim);
}