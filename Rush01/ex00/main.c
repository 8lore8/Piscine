#include <unistd.h>

int	generator (int board[4][4], int *flags);
void	output (int board[4][4]);

int	start_board(int *flags)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	if (generator(board, flags))
		output(board);
	else
		write(1, "Error\n", 6);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	output(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			ft_putchar(board[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	check_flags_value(char *arg, int *flags)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		if (arg[0] == ' ' || (arg[31] == ' '))
			return (0);
		if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
				|| (!((arg[i + 1])) && (arg[i - 1] == ' '))))
		{
			flags[j] = (arg[i] - '0');
			j++;
			i++;
		}
		if (arg[i] == 32 && ((arg[i - 1] >= '1' && arg[i - 1] <= '4')
				&& (arg[i + 1] >= '1' && arg[i + 1] <= '4')))
			i++;
		else
			return (j);
	}
	return (j);
}

int	main(int argc, char **argv)
{
	int	flags[16];
	int	i;

	i = 0;
	if (argc == 2)
	{
		i = check_flags_value(argv[1], flags);
		if (i == 16)
			start_board(flags);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
