/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:08:29 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/06 12:09:39 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*_dst;
	const unsigned char	*_src;


	if (src < dst)
	{
		_dst = dst + len - 1;
		_src = src + len - 1;
		while (len--)
			*(_dst--) = *(_src--);
	}
	else if (src > dst)
	{
		_dst = dst;
		_src = src;
		while (len--)
			*(_dst++) = *(_src++);
	}
	return (dst);
}
