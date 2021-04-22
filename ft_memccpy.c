/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 20:50:31 by dpants            #+#    #+#             */
/*   Updated: 2021/04/22 20:50:31 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const char *src, int s, size_t n)
{
	size_t	i;
	char	*tmp_d;
	char	*tmp_s;
	char	tmp_smb;

	i = 0;
	tmp_d = (char*)dest;
	tmp_s = (char*)src;
	tmp_smb = (char*)s;
	while(i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
		if (tmp_s[i - 1] == tmp_smb)
			return (tmp_d[i]);
	}
	return (NULL);
}