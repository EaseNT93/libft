/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:46:17 by dpants            #+#    #+#             */
/*   Updated: 2021/05/02 12:46:17 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) + ft_strlen(s1) + 1);
	if (NULL == new_str)
		return (NULL);
	while (*s1)
	{
		if (!ft_strncmp(s1, set, ft_strlen(set)))
			s1 += ft_strlen(set);
		else
		{
			*new_str = *s1;
			new_str++;
			s1++;
		}
	}
	*new_str = '\0';
	return (&new_str[0]);
}
