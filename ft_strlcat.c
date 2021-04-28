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

	i = 0;
	while(*dest)
		dest++;
	while(i < n && src[i])
		*dest++ = src[i++];
	dest[i] = '\0';
	return (ft_strlen(dest));
}