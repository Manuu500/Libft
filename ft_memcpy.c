/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:56:13 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/12 20:56:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memcpy(void *dest, void *src, unsigned int n)
{
    int i;
    char* a;
    char* b;

    b = dest;
    a = src;
    i = 0;
    while(b[i] != '\0' && i <= n - 1)
    {
        b[i] = a[i];
        write(1, &b[i], 1);
        i++;
    }
    b[i] = '\0';

}