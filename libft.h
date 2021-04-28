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
char	*ft_strchr(const char *str, int s); /* fail with \0 */
size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int s); /* fail with \0 */
void	*ft_memmove(void *dest, const void *src, size_t n); /* undone */
void	*ft_memchr(const void *str, int s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);

#endif
