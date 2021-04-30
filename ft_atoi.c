/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:17:10 by dpants            #+#    #+#             */
/*   Updated: 2021/04/28 21:17:10 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned	long	n;
	int					s;

	n = 0;
	s = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		str++;
		s = -s;
	}
	else if (*str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		n = (*str - '0') + n * 10;
		str++;
	}
	return ((int)n * s);
}