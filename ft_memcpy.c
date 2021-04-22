/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:22:35 by dpants            #+#    #+#             */
/*   Updated: 2021/04/22 18:22:35 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp_d;
	char	*tmp_s;

	i = 0;
	tmp_d = (char*)dest;
	tmp_s = (char*)src;
	while(i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	return (dest);
}