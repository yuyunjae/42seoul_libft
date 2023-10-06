/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:39:00 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/06 20:29:26 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int dest_size)
{
	int	i;

	i = 0;
	if (src && dest_size > 0)
	{
		while (dest_size - 1 > i)
			dest[i++] = src[i];
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
