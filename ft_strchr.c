/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:27:35 by dpants            #+#    #+#             */
/*   Updated: 2021/04/22 14:27:35 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	char	*tmp_str;
	char	tmp_s;

	tmp_str = (char *)str;
	tmp_s = (char)s;
	while (*tmp_str)
	{
		if (*tmp_str == tmp_s)
			return (tmp_str);
		tmp_str++;
	}
	if (tmp_str == '\0' && tmp_s == '\0')
		return (tmp_str);
	return (NULL);
}
