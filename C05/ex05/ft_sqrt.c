/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:44:23 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/24 14:44:24 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	if (nb > 0)
	{
		while ((nb / c) != c || (nb % c) != 0)
		{
			c++;
			if (c == nb)
				return (0);
			else if (c >= 46341)
				return (0);
		}
		return (c);
	}
	return (0);
}
