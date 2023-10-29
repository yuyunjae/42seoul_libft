/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:52:59 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/29 17:55:06 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	if (d_len >= size)
		return (s_len + size);
	else
	{
		while (src != 0 && (d_len + i + 1 < size))
		{
			dest[d_len + i] = src[i];
			i++;
		}
		if (d_len + i + 1 <= size)
			dest[d_len + i] = 0;
		return (d_len + s_len);
	}
}
