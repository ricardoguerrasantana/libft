/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:26:36 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/21 16:06:07 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1len;

	s1len = ft_strlen(s1);
	s2 = ft_calloc(s1len + 1, sizeof(char));
	if (!s2)
		return ((char *)('\0'));
	return ((char *)ft_memcpy(s2, s1, s1len + 1));
}
