/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:26:08 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/24 11:39:47 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	ris;

	if (nb >= 0)
	{
		ris = 1;
		while (nb > 0)
		{
			ris = ris * nb;
			nb--;
		}
		return (ris);
	}
	return (0);
}
