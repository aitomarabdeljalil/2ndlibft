/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:06:32 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/10 17:07:53 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft.h"

// doesn't work for INT_MIN
static int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}

char	*ft_itoa(int n)
{
	char	tmp[12];
	char	*cursor;
	bool	neg;

	cursor = tmp + 11;
	*cursor = '\0';
	neg = n < 0;
	if (n == 0)
		*(--cursor) = '0';
	while (n)
	{
		*(--cursor) = ft_abs(n % 10) + 48;
		n /= 10;
	}
	if (neg)
		*(--cursor) = '-';
	return (ft_strdup(cursor));
}
