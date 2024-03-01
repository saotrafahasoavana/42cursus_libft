/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:20:13 by saandria          #+#    #+#             */
/*   Updated: 2024/02/28 09:05:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*(char *)s == (char)c)
			return ((char *) s);
		s++;
	}
	if (*(char *)s == (char)c)
		return ((char *)s);
	return (NULL);
}
