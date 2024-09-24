/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:12:19 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/24 20:23:20 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlen(const char *str)
{
    size_t    i;
    size_t    cont;

    cont = 0;
    i = 0;
    while (str[i++] != '\0')
    {
        cont++;
    }
    return (cont);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    long_s;
    char    *str;

    i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (0);
    long_s = ft_strlen((char*)s);
    str = (char *)malloc(sizeof(char) * ((long_s) - start) + 1);
    if (!str)
        return (0);
    while (s[i] != '\0' && i < len)
    {
        str[i] = s[i + start];
        i++;
    }
    str[i] = '\0';
    return (str);
}


int main()
{
    char string[] = "holamellamoantonio";
    char *i = ft_substr(string, 6, 14);
    printf("%s\n", i);
}

