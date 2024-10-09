/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:01:57 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/08 20:42:51 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t    get_num_length(int a)
{
    size_t    i;

    i = 0;
	if (a == 0)
		i = 1;
	if (a < 0)
	{
		a = a * -1;
		i++;
	}
    while (a != 0)
    {
        a = a/10;
        i++;
    }
    return (i);
}

char	*function(char *str, size_t i, char sign, int n)
{
	size_t    cont;

	cont = get_num_length(n);
	str = malloc(sizeof(char) * (cont + 1));
	if (!str)
		return (0);
	str[cont] = '\0';
	i = cont - 1;
	if (n < 0)
	{
	sign = -1;
	n = -n;
	}
	while (n > 0)
	{
		str[i--] = n % 10 + '0';    
		n = n / 10; //elimina el ultimo dígito del número n
	}
	if (sign == -1)
	str[0] = '-';
	return (str);
}

char    *ft_itoa(int n)
{
    char    *str;
    size_t    i;
    char    sign;

    sign = 1;
	str = function(str, i, sign, n);
	if (n == -2147483648)
		return("2147483648");
    return (str);
}

//  int main()
//  {
// 	char	*i = ft_itoa(-34);
// 	printf("%s\n", i);
//  }