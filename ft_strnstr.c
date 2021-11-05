/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:58:39 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/05 21:38:54 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*cursor;
	int			len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	cursor = ft_strchr(haystack, needle[0]);
	while (haystack != NULL && cursor <= haystack + len - len_needle)
	{
		if (ft_strncmp(haystack, needle, len_needle) == 0)
			return ((char *)haystack);
		haystack = ft_strchr(haystack + 1, needle[0]);
	}
	return (NULL);
}
