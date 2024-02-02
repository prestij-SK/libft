/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:01:28 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/26 13:35:46 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// abcdef
//   abcd
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	const char	*temp_src;

	if (dest == src || n == 0)
		return (dest);
	temp_dest = (char *)dest;
	temp_src = (const char *)src;
	if (temp_dest < temp_src || temp_dest >= temp_src + n)
	{
		while (n--)
			*(temp_dest++) = *(temp_src++);
		return (dest);
	}
	temp_dest += n - 1;
	temp_src += n - 1;
	while (n--)
		*(temp_dest--) = *(temp_src--);
	return (dest);
}
