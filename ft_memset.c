/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:05 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/12 15:11:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int value, unsigned int num)
{
    int i;
    char* a;

    a = str;
    i = 0;
    while(a[i] != '\0')
    {
        if(i <= num - 1)
        {
            a[i] = value;
        }
        write(1, &a[i], 1);
        i++;
    }
}

int main()
{
    char text[] = "hola como esta";
    ft_memset(text, 'a', 1);
}