/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:13:07 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/09 14:19:35 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dup;
	unsigned int	i;

	dup = ft_strdup(s);
	if (dup != NULL)
	{
		i = 0;
		while (dup[i])
		{
			dup[i] = f(i, dup[i]);
			i++;
		}
	}
	return (dup);
}
