/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:04:34 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 10:08:00 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(const char *str, char del)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (*str == del)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static char	*get_word(const char *str, char del, size_t *index)
{
	char	*word;
	size_t	i;

	while (str[*index] == del)
		++(*index);
	i = 0;
	while (str[i + *index] && str[i + *index] != del)
		++i;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i + *index] && str[i + *index] != del)
	{
		word[i] = str[i + *index];
		++i;
	}
	*index += i;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	size_t	word_count;
	size_t	word_i;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = word_counter(s, c);
	mat = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!mat)
		return (NULL);
	i = 0;
	word_i = 0;
	while (word_i < word_count)
	{
		mat[word_i] = get_word(s, c, &i);
		++word_i;
	}
	mat[word_i] = NULL;
	return (mat);
}