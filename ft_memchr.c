/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:46:43 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/15 19:15:58 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*_s;
	unsigned char		_c;

	_s = (const unsigned char *)s;
	_c = (unsigned char)c;
	while (n)
	{
		if (*_s == _c)
			return ((void *)_s);
		_s++;
		n--;
	}
	return (0);
}
