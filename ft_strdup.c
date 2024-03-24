/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:24:53 by saandria          #+#    #+#             */
/*   Updated: 2024/03/24 15:28:42 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = (char *)s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
