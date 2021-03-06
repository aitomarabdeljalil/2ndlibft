/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:25:14 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/11 12:34:22 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*_dst;
	const unsigned char	*_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	_dst = dst;
	_src = src;
	while (n--)
		*(_dst++) = *(_src++);
	return (dst);
}
