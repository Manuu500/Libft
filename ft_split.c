/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:57:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/11 16:30:56 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	*str;
	size_t	str_long;

	str = NULL;
	str_long = word_count(s,c);
	str = malloc(sizeof(char) * (str_long + 1));
	if (!str)
	{
		m_free(str);
		return (0);
	}
	
}

char	word_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (i < c)
		i++;
	return (i);
}

void	m_free (char *str)
{
	if (str)
		free(str);
}

char	*word_fill (char *s)
{
	char	*str;
	size_t	i;

	str = NULL;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

//Meter toda la cadena en un malloc
//Librerar con la funcion strchr los caracteres que no son deseados

/*
".....hola...pruebame..x.", '.'

*
->	* -> "hola"
	* -> "pruebame"
	* -> "x"
	* -> NULL

*/