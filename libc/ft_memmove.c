/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:18:13 by ricguerr          #+#    #+#             */
/*   Updated: 2023/04/26 14:55:42 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*_d;
	const char	*_s;

	d = dst;
	s = src;
	_d = dst + len - 1;
	_s = src + len - 1;
	while (len--)
	{
		if (d < s)
			*d++ = *s++;
		else
			*_d-- = *_s--;
	}
	return (dst);
}
