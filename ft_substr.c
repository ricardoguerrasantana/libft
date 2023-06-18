/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:06:00 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/20 18:44:50 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	str_len -= start;
	if (len > str_len)
		len = str_len;
	sub_str = (char *)malloc(sizeof(char) * (len +1));
	if (!sub_str)
		return (0);
	ft_memcpy(sub_str, s + start, len + 1);
	sub_str[len] = '\0';
	return (sub_str);
}	
