/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:55:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/23 13:16:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;  
    while (big[i] != '\0' && i < len)
    {
      j = 0;
      while (big[i+j] == little[j])
      {
        if (little[j] == '\0')
            return ((char*)big + i);
        j++;
      }
      i++;
    }
	return ((char*)big);}

int    main(void)
{
    char big[] = "holadholaiosadios";
    char little[] = "";
    char* i = ft_strnstr(big, little, 15);
    printf("%s/n", i);
}

// char *ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t i;
// 	size_t j;

// 	i = 0;
// 	while (big[i] != '\0' && i < len)
// 	{
// 		if (big[i] == little[j])
// 		{
// 			if (little[j] == '\0')
// 			{
// 				return(&big[i]);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }