/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:43:35 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/06 12:25:02 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_if_else(char r, char s, char t)
{
	if (! (r == '7' && s == '8' && t == '9'))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a +1;
		while (b <= '9')
		{
			c = b +1;
			while (c <= '9')
			{
				ft_write(a, b, c);
				ft_if_else(a, b, c);
				c++;
			}
			b++;
		}	
		a++;
	}
}
