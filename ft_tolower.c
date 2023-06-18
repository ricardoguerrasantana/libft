/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:04:24 by ricguerr          #+#    #+#             */
/*   Updated: 2023/05/15 14:05:02 by ricguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	_c;

	_c = c;
	if (_c >= 65 && _c <= 90)
		_c += 32;
	return (_c);
}
