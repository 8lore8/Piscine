int	check_flags(int board[4][4], int *flags);

int	find_zero(int board[4][4], int *row, int *col)
{
	*row = 0;
	while (*row <= 3)
	{
		*col = 0;
		while (*col <= 3)
		{
			if (!(board[*row][*col]))
				return (0);
			*col += 1;
		}
		*row += 1;
	}
	return (1);
}

int	check_col(int board[4][4], int col, int n)
{
	int	row;

	row = 0;
	while (row <= 3)
	{
		if (board[row][col] == n)
			return (0);
		row++;
	}
	return (1);
}

int	check_row(int board[4][4], int row, int n)
{
	int	col;

	col = 0;
	while (col <= 3)
	{
		if (board[row][col] == n)
			return (0);
		col++;
	}
	return (1);
}

int	check_clone(int board[4][4], int row, int col, int n)
{
	if ((check_row(board, row, n)) && (check_col(board, col, n))
		&& (!(board[row][col])))
		return (1);
	return (0);
}

int	generator(int board[4][4], int *flags)
{
	int	i;
	int	n;
	int	row;
	int	col;

	i = 0;
	if (find_zero(board, &row, &col) && (check_flags(board, flags)))
		return (1);
	n = 1;
	while (n <= 4)
	{
		if (check_clone(board, row, col, n))
		{
			board[row][col] = n;
			if (generator(board, flags))
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
