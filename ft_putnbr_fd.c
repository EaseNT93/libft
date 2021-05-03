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

int		ft_intnlen(int n)
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
	char	str[12];
	int		i;

	i = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			str[i++] = '-';
			n = -n;
		}
		i += ft_intnlen(n);
		str[i--] = '\0';
		while (n >= 0)
		{
			str[i--] = (n % 10) + '0';
			n /= 10;
			if (n == 0)
				break ;
		}
		write(fd, str, 11);
	}
}
