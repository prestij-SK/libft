/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:08:58 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 10:09:39 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str_new;

	if (!s1 || !s2)
		return (NULL);
	str_new = (char *)malloc((sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (!str_new)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str_new[i] = *s1;
		++s1;
		++i;
	}
	while (*s2)
	{
		str_new[i] = *s2;
		++s2;
		++i;
	}
	str_new[i] = '\0';
	return (str_new);
}
