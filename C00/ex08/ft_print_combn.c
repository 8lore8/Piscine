/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:32:46 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/10 12:25:24 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int n)
{
	char	a;

	a = n + '0';
	write (1, &a, 1);
}

void	ft_comb(int ini, int fin)
{
	int	indice;
	int	num;

	while (fin <= 9)
	{
		num = fin;
		while (num <= 9)
		{
			indice = ini;
			while (indice < fin)
			{
				ft_write(indice);
				indice++;
			}
			ft_write(num);
			if (!(fin == 9 && num == 9))
				write(1, ", ", 2);
			num++;
		}
		fin++;
		ini++;
	}
}

void	ft_print_combn(int n)
{
	int	ini;
	int	fin;

	ini = 0;
	fin = n -1;
	if (0 < n && n < 10)
	{
		ft_comb(ini, fin);
	}
}
