/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:33:19 by ricguerr          #+#    #+#             */
/*   Updated: 2023/04/26 14:56:14 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	n;

	src_len = ft_strlen(src);
	n = 0;
	if (!dstsize)
		return (src_len);
	if (dstsize > 0)
		n = dstsize - 1;
	if (n > src_len)
		n = src_len;
	while (n--)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}
