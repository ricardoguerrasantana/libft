/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:06:30 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/18 19:24:36 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_str;
	size_t	len_newstr;

	if (!s1)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len_newstr = ft_strlen(s1);
	while (len_newstr > 0 && ft_strchr(set, s1[len_newstr - 1]))
		len_newstr--;
	new_str = malloc(len_newstr + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, len_newstr + 1);
	return (new_str);
}
