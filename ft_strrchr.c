/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:57:15 by dpants            #+#    #+#             */
/*   Updated: 2021/04/22 12:57:15 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int s)
{
	char	tmp;
	int		i;

	i = 0;
	tmp = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			tmp = str[i];
		i++;
	}
	return (tmp);
}
