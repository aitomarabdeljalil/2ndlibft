/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:45:27 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/10 17:47:04 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (i == dstsize)
		return (i + ft_strlen(src));
	len_dst = i;
	ft_strlcpy(dst + i, src, dstsize - i);
	return (len_dst + ft_strlen(src));
}
