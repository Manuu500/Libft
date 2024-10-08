/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:03:30 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/08 17:13:09 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *a;
    size_t  i;
    size_t  j;
    size_t  k;
    
    if (!s1)
        return (0);
    if (!set)
        return (ft_strdup(s1));

    k = 0;
    j = ft_strlen(s1);
    i = 0;
    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;
    while (j > i && ft_strchr(set, s1[j - 1]))
        j--;
    a = malloc(sizeof(char) * (j - i + 1)); // El + 2 se hace para reservarle un espacio al nulo
    if (!a)
        return (0);
    while (i < j)
    {
      a[k] = s1[i];
      i++;
      k++;
    }
    a[k] = '\0';
    return (a);
}

// int main()
// {
// 	char str1[] = "holamellamoantonio";
// 	char str2[] = "antonio";
// 	char *i = ft_strtrim(str1, str2);
// 	printf("%s\n", i);
// }
















// int	 word_limit(char const *big, char const *little)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = ft_strlen(big);
// 	while (big[i] != '\0')
// 	{
// 		j = 0;
// 		while (big[i - j] == little[j])
// 		{
// 			if (little[j] != big [i - j])
// 				return (i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (i);
// }


// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;
// 	size_t	cont;

//  	cont = 0;
//  	i = 0;
//  	while (str[i++] != '\0')
//  		cont++;
//  	return (cont);
// }
