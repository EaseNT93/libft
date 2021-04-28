/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:18:51 by dpants            #+#    #+#             */
/*   Updated: 2021/04/28 11:18:51 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j] && j < n)
		j++;
	if (j < n - 1)
	{
		while (j + i < (n - 1) && src[i])
			dest[j + i] = src[i++];
		dest[j + i] = '\0';
	}
	if (ft_strlen(dest) < n)
		return (ft_strlen(dest) + ft_strlen(src));
	else
		return (n + ft_strlen(src));
}