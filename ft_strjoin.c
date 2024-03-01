/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:45:49 by saandria          #+#    #+#             */
/*   Updated: 2024/02/21 09:52:25 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*sfinal;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	sfinal = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (sfinal == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		sfinal[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		sfinal[i + j] = s2[j];
		j++;
	}
	sfinal[i + j] = '\0';
	return (sfinal);
}
