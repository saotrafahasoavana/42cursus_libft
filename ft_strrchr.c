/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:18:41 by saandria          #+#    #+#             */
/*   Updated: 2024/02/28 09:06:42 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occ;

	occ = (void *) 0;
	while (*s)
	{
		if (*(char *)s == (char)c)
			occ = (char *) s;
		s++;
	}
	if ((char)c == '\0')
	{
		if (*(char *)s == '\0')
			return ((char *) s);
	}
	return (occ);
}
