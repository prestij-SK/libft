/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skedikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:58:24 by skedikia          #+#    #+#             */
/*   Updated: 2024/01/18 09:59:07 by skedikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		++count;
	}
	return (count);
}

static char	*special_case(int digits)
{
	char	*ans;

	ans = (char *)malloc((sizeof(char) * digits) + 2);
	if (!ans)
		return (NULL);
	ans[0] = '-';
	ans[1] = '2';
	ans[2] = '1';
	ans[3] = '4';
	ans[4] = '7';
	ans[5] = '4';
	ans[6] = '8';
	ans[7] = '3';
	ans[8] = '6';
	ans[9] = '4';
	ans[10] = '8';
	ans[11] = '\0';
	return (ans);
}

static char	*negative_case(int n, int digits)
{
	char	*ans;

	n *= -1;
	ans = (char *)malloc((sizeof(char) * digits) + 2);
	if (!ans)
		return (NULL);
	ans[digits + 1] = '\0';
	while (digits > 0)
	{
		ans[digits] = (n % 10) + '0';
		n /= 10;
		--digits;
	}
	ans[0] = '-';
	return (ans);
}

static char	*positive_case(int n, int digits)
{
	char	*ans;

	ans = (char *)malloc((sizeof(char) * digits) + 1);
	if (!ans)
		return (NULL);
	ans[digits] = '\0';
	while (digits > 0)
	{
		ans[digits - 1] = (n % 10) + '0';
		n /= 10;
		--digits;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*ans;

	digits = digit_count(n);
	if (n == -2147483648)
		ans = special_case(digits);
	else if (n < 0)
		ans = negative_case(n, digits);
	else
		ans = positive_case(n, digits);
	return (ans);
}