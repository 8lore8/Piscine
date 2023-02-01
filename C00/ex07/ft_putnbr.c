/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:04:05 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/15 15:27:46 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	zero(int nb, int i, char a[])
{
	if (nb == 0 && i == 0)
		a[0] = '0';
}

void	stampa(int i, char a[])
{	
	while (i >= 0)
	{
		write (1, &a[i], 1);
		i = i -1;
	}
}

void	ft_putnbr(int nb)
{
	char	a[10];
	int		i;

	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	i = 0;
	if (nb <= -1)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		a[i] = nb % 10 + '0';
		nb = nb / 10;
		i = i +1;
	}
	zero(nb, i, a);
	stampa(i, a);
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
