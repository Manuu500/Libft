/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:06:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/19 12:13:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] == (char)c)
			return((char *)&s[i]);
		i++;
	}
	if(c == '\0')
	    return ((char *)s + i);
	return (0);
}