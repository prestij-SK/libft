/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:08:40 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 10:08:41 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s_copy;
	size_t	len;

	len = ft_strlen(s1);
	s_copy = (char *)malloc((sizeof(char) * len) + 1);
	if (!s_copy)
		return (NULL);
	return (ft_memcpy(s_copy, s1, len + 1));
}
