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
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[ft_strlen(s1) + j]))
		j--;
	new_str = ft_substr(s1, i, ft_strlen(s1) + j);
	return (new_str);
}
