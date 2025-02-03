/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:50:04 by marcgar2          #+#    #+#             */
/*   Updated: 2025/02/03 22:55:37 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	is_on_str(char *s1, char c)
{
	int		i;
	bool	j;

	i = 0;
	while (*s1)
	{
		j = false;
		while (*s1 == c)
			++s1;
		while (*s1 != c && *s1)
		{
			if (!j)
			{
				++i;
				j = true;
			}
			++s1;
		}
	}
	return (i);
}

static char	*next_word(char *s, char c)
{
	static int	track = 0;
	char		*next_w;
	int			len;
	int			i;

	i = 0;
	len = 0;
	while (s[track] == c)
		++track;
	while ((s[track + len] != c) && s[track + len])
		++len;
	next_w = malloc((size_t)len * sizeof(char) + 1);
	if (!next_w)
		return (NULL);
	while ((s[track] != c) && s[track])
		next_w[i++] = s[track++];
	next_w[i] = '\0';
	return (next_w);
}

char	**split(char *s, char c)
{
	char	**dest;
	int		i;
	int		word_count;

	i = 0;
	word_count = is_on_str(s, c);
	if (!word_count)
		exit(1);
	dest = malloc(sizeof(char *) * (size_t)(word_count + 2));
	if (!dest)
		return (NULL);
	while (word_count-- >= 0) {
		if (i == 0) {
			dest[i] = malloc(sizeof(char));
			if (!dest[i])
				return (NULL);
			dest[i++][0] = '\0';
			continue ;
		}
		dest[i++] = next_word(s, c);
	}
	dest[i] = NULL;
	return (dest);
}
