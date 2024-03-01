/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:54:43 by saandria          #+#    #+#             */
/*   Updated: 2024/02/29 08:21:34 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;

	b = (char *) big;
	if (!*little)
		return (b);
	i = 0;
	while ((i < len && b[i] != '\0'))
	{
		if (b[i] == little[0])
		{
			if ((ft_strncmp(b + i, (char *)little, ft_strlen(little)) == 0)
				&& i + ft_strlen(little) <= len)
				return (b + i);
		}
		i++;
	}
	return (NULL);
}
