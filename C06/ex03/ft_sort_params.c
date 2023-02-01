/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:29:23 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/26 10:29:24 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = str + 1;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	res;

	c = 0;
	res = 0;
	while (s1[c] != '\0')
	{
		if (s1[c] < s2[c] || s1[c] > s2[c])
		{	
			res = (s1[c] - s2[c]);
			break ;
		}
		c++;
	}
	return (res);
}

void	ft_sort_tab(char **tab, int size)
{
	int	i;
	int	b;

	i = 1;
	b = 0;
	while (b != 1)
	{
		b = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				b = 0;
			}
			i++;
		}
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	c;		

	c = 1;
	ft_sort_tab(argv, argc);
	while (c < argc)
	{	
		ft_putstr(argv[c]);
		c++;
	}
	return (0);
}
