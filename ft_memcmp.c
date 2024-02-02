/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:00:42 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 10:00:44 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*temp_s1;
	const char	*temp_s2;
	size_t		i;

	i = 0;
	temp_s1 = (const char *)s1;
	temp_s2 = (const char *)s2;
	while (i < n)
	{
		if (temp_s1[i] != temp_s2[i])
			return ((unsigned char)temp_s1[i] - (unsigned char)temp_s2[i]);
		i++;
	}
	return (0);
}
