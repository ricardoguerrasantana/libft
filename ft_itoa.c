/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:06:31 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/18 19:24:37 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* this function calculate the lenght of integer */

static int	get_num_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
/* this function fill the the string with digit
by extracting each digit and convert to char */

static void	fill_str(char *str, int n, int len, int sign)
{
	int	digit;

	str[len] = '\0';
	while (len--)
	{
		if (n < 0)
			digit = -(n % 10);
		else
			digit = n % 10;
		str[len] = digit + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}
/* this function conver an integer to stirng */

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = get_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_str(str, n, len, sign);
	return (str);
}
