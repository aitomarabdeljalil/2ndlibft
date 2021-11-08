/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:35 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/09 11:13:19 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static char	*ft_strword(const char **s, char sep)
{
	char	*word;
	size_t	i;

	if (*s == NULL)
		return (NULL);
	word = NULL;
	i = 0;
	while (**s && **s == sep)
		(*s)++;
	while (s[0][i] && s[0][i] != sep)
		i++;
	if (i != 0)
		word = ft_substr(*s, 0, i);
	if (s[0][i] == '\0')
		*s = NULL;
	else
		*s += i + 1;
	return (word);
}

static size_t	ft_strwc(const char *s, char sep)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			counter++;
		i++;
	}
	return (counter);
}

static void	ft_free_words(char	**words)
{
	char	**alias;

	alias = words;
	while (*alias)
		free(*alias++);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**words;

	word_count = ft_strwc(s, c);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	words[i] = ft_strword(&s, c);
	while (words[i])
		words[++i] = ft_strword(&s, c);
	if (i == word_count)
		return (words);
	ft_free_words(words);
	return (NULL);
}
