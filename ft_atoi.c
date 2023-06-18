/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:03:54 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/18 18:53:42 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspecialc(char c)
{
	char	arr[7];
	int		i;

	arr[0] = ' ';
	arr[1] = '\t';
	arr[2] = '\n';
	arr[3] = '\r';
	arr[4] = '\v';
	arr[5] = '\f';
	arr[6] = '\0';
	i = 0;
	while (arr[i])
	{
		if (arr[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	acc;

	sign = 1;
	acc = 0;
	while (ft_isspecialc(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (acc > 2147483647 / 10)
			return (2147483647);
		if (acc < -2147483648 / 10)
			return (-2147483648);
		acc *= 10;
		acc += *str - '0';
		str++;
	}
	return (sign * acc);
}
