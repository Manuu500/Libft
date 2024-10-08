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
    int    i;

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

char	*ft_itoa(int n)
{
	int	con_str;
	char	str;
	size_t	s_long;
	
	con_str = get_num_length(n);
	str = malloc((con_str + 1));
}

 int main()
 {
 	ft_itoa(34);
 }