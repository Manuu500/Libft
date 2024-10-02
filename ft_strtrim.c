/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:03:30 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/02 15:05:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// size_t	word_count (char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = ft_strlen(s1);
	
// 	while (s1)
// 	{
// 		j = 0;
// 		while (s1[i - j] == 0)
// 		{
// 			if(s1[i - j] != 0)
// 				return (j);
// 			j++;
// 		}
// 		i--;
// 	}
// 	return (i);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	count;
// 	char	*str;

// 	count = word_count(s1, set);
// 	i = 0;
// 	while (s1[i] < count)
// 	{
// 		str[i] = s1[i];
// 		i++;	
// 	}
// 	return (str);
// }

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
