/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:30:23 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/29 18:11:41 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;
	size_t	j;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (*s2 == 0)
		return (s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && s1[i + j] == s2[j] && i + j < n)
		{
			j++;
			if (s2[j] == 0)
				return (s1 + i);
		}
		i++;
	}
	return (0);
}
