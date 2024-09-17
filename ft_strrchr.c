/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:00:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/17 19:14:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = count(s) - 1;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			return((char *)&s[i]);
		}	
		i--;		
	}
	if(c == '\0')
		return ((char *)s);
	return (0); 
}