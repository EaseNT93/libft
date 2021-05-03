/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:44:48 by dpants            #+#    #+#             */
/*   Updated: 2021/05/03 14:44:48 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nlen(int n)
{
	int		l;

	l = 0;
	while (1)
	{
		l++;
		n /= 10;
		if (n == 0)
			return (l);
	}
	return (l);
}

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, ft_itoa(n), ft_nlen(n));
}