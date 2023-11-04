/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:53:04 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/29 21:37:42 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	total;

	total = count * size;
	if (size != 0 && ((size_t)(total / size) != count))
		return (0);
	str = (char *)malloc(total);
	if (!str)
		return (0);
	ft_bzero(str, total);
	return (str);
}
