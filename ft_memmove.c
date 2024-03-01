/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:36:23 by saandria          #+#    #+#             */
/*   Updated: 2024/02/23 13:17:27 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		i = -1;
		while (++i < n)
			*(char *)(dest + i) = *(char *)(src + i);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			*(char *)(dest + i) = *(char *)(src + i);
		}
	}
	return (dest);
}
