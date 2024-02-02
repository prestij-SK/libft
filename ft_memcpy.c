/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:12:47 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/26 13:34:59 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	const char	*temp_src;

	if (!dest && !src)
		return (NULL);
	temp_dest = (char *)dest;
	temp_src = (const char *)src;
	while (n > 0)
	{
		*temp_dest = *temp_src;
		++temp_dest;
		++temp_src;
		--n;
	}
	return (dest);
}
