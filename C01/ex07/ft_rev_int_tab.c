/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:35:21 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/15 11:11:08 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (i < size / 2)
	{
		b = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = b;
		i++;
	}
}
