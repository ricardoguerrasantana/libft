/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:33:19 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/15 14:08:10 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = 0;
	while (dst[destlen] != '\0' && destlen < dstsize)
	{
		destlen++;
	}
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (destlen == dstsize)
		return (destlen + srclen);
	i = 0;
	while (src[i] != '\0' && destlen + i < dstsize - 1)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
