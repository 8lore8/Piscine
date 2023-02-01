/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:57:13 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/24 12:14:44 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	ris;

	c = 0;
	ris = 1;
	if (power < 0)
		return (0);
	while (c < power)
	{
		ris = ris * nb;
		c++;
	}
	return (ris);
}
