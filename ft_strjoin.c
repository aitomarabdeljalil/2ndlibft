/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:29:42 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/06 15:30:00 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*s;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = malloc(len_s1 + len_s2 + 1);
	if (s != NULL)
	{
		ft_memcpy(s, s1, len_s1 + 1);
		ft_memcpy(s + len_s1, s2, len_s2 + 1);
	}
	return (s);
}
