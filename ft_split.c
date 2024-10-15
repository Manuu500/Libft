/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:57:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/15 20:40:59 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	word_count(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

// char	*word_fill (char *s)
// {
// 	char	*str;
// 	size_t	i;

// 	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
// 	while (s[i] != '\0')
// 	{
// 		str[i] = ft_strchr;
// 		i++;
// 	}
// 	return (str);
// }

static size_t	word_counter(const char *s, char c, size_t z)
{
	size_t	ctr;

	ctr = 0;
	while (s[z] != '\0')
	{
		if (s[z] != c)
		{
			ctr++;
			if (s[z + 1] == c)
				return (ctr);
		}
		z++;
	}
	return (ctr);
}

void	free_mem(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**split_body(char const *s, char c, char **str)
{
	size_t	f;
	size_t	j;
	size_t	ctr;

	f = 0;
	j = 0;
	ctr = 0;
	while (s[f])
	{
		while (s[f] == c)
			f++;
		ctr = word_counter(s, c, f);
		if (ctr > 0)
		{
			str[j] = ft_substr(s, f, ctr);
			if (!str[j])
				free_mem(str);
			j++;
		}
		f = f + ctr;
	}
	str[j] = NULL;
	return (&*str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	str_long;

	str_long = 0;
	str_long = word_count(s, c);
	str = malloc(sizeof(char *) * (str_long + 1));
	if (!str)
		return (NULL);
	str = split_body(s, c, str);
	return (str);
}
