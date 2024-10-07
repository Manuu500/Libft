/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:27:09 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/03 20:27:09 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_up (unsigned int *i, char str)
{
    if (str >= 97 && str <= 122)
        str -= 32;
    return (str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;    

    i = 0;
    if (!s || !f)
        return (0);
    str = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!str)
        return (0);
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main (void)
{
    char *i = ft_strmapi("HOLA", ft_up);
    printf("%s\n", i);
}