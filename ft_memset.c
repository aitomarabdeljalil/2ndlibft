/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:21:01 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/05 18:19:35 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*_b;
	size_t			i;

	_b = b;
	i = 0;
	while (i < len)
		_b[i++] = (unsigned char)c;
	return (b);
}
