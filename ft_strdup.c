/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:45:36 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/06 10:45:37 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len_src;

	len_src = ft_strlen(src);
	copy = malloc(len_src + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, src, len_src + 1);
	return (copy);
}
