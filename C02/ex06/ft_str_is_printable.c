/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:07:41 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/19 13:01:34 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (str[i] == '\0')
		return (j);
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			j = 0;
		}
		i++;
	}
	return (j);
}