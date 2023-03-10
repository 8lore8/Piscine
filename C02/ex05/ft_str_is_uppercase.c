/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:27:28 by lbaroni           #+#    #+#             */
/*   Updated: 2022/05/16 16:04:00 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (str[i] == '\0')
		return (j);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			j = 0;
		}
		i++;
	}
	return (j);
}
