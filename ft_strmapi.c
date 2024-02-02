/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:11:07 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 10:11:10 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str_new;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str_new = (char *)malloc((sizeof(char) * len) + 1);
	if (!str_new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_new[i] = (*f)(i, s[i]);
		++i;
	}
	str_new[i] = '\0';
	return (str_new);
}
