/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:56:21 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/15 18:28:33 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	matrice(int board[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{	
			board[row] = + 48;
			write(1, &board[row][column], 1);
			row++;
		}
		write(1, "\n", 1);
		column++;
	}
}

int	main(void)
{
	int	board[4][4] = {
