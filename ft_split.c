/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:18:04 by marvin            #+#    #+#             */
/*   Updated: 2023/09/24 20:18:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_free(char **s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		free(s[j]);
		j++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**split_strings;
	size_t	word_len;
	int		i;

	split_strings = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !split_strings)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			split_strings[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	split_strings[i] = NULL;
	return (split_strings);
}
/*
int main(void)
{
    char str [] = "Hello, how are you";
    char    c = ' ';

    printf("%s", ft_split(str, ','));
}
*/