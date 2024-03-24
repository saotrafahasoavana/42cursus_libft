/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:05:51 by saandria          #+#    #+#             */
/*   Updated: 2024/03/24 14:13:05 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char 	*d;

	if (!dest && !src)
		return (0);
	s = (char *)src;
	d = (char *)dest;
	if (d < s)
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = n + 1;
		while (--i > 0)
			d[i] = s[i];
	}
	return ((void *)d);
}
