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
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		i++;
	}
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