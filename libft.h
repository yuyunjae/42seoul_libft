/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:50:10 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/06 21:55:54 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *s);
void	*ft_memset(void *b, int c, int len);
void	*ft_memcpy(void *dst, const void *src, int n);
void	*ft_memmove(void *dst, const void *src, int n);
int		ft_strlcpy(char *dst, const char *src, int n);
int		ft_strlcat(char *dst, const char *src, int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);
void	*memchr(const void *s, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, int n);
char	*ft_strnstr(const char *str1, const char *str2, int n);
int		atoi(const char *str);

#endif
