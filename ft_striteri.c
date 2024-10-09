/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:09:34 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/09 19:09:34 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *f_up(unsigned int i, char   *str)
{
    if (str >= 97 && str <= 122)
        str -= 32;
    write(1, &str, 1);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;
    char    *str;

    i = 0;
    if (!s || !f)
        return (0); 
    while (s[i] != '\0')
    {
        f(i, s[i]);
        i++;
    }
}

 int main (void)
 {
    ft_strmapi("HOLA", f_up);
 }