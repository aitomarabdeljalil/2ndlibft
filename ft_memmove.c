/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:08:29 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/04 19:42:51 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*_dst;
	const char	*_src;

	_dst = dst;
	_src = src;
	if (_src < _dst)
	{
		while (len--)
			*(_dst++) = _src[len - 1];
	}
	else if (_src > _dst)
	{
		while (len--)
			*(_dst++) = *(_src++);
	}
	return (dst);
}
