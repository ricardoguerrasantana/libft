/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:03:06 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/20 20:55:04 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*_s1;
	const unsigned char	*_s2;

	_s1 = (const unsigned char *)s1;
	_s2 = (const unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && (*_s1 == *_s2))
	{
		_s1++;
		_s2++;
	}
	return (*_s1 - *_s2);
}
