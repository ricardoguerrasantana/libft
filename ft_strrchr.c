/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:17:27 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/15 16:56:43 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurr;

	last_occurr = (char *)('\0');
	while (*s)
	{
		if (*s == c)
			last_occurr = (char *)s;
		s++;
	}
	if (!c)
		last_occurr = (char *)s;
	return (last_occurr);
}
