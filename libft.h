/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpants <dpants@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 01:26:33 by dpants            #+#    #+#             */
/*   Updated: 2021/04/21 01:26:33 by dpants           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_bzero(void *str, size_t n);
void	*ft_memccpy(void *dest, const void *src, int s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int s, size_t n);
char	*strchr(const char *str, int s);
size_t	ft_strlen(const char *str);
char	*strrchr(const char *str, int s);

#endif
