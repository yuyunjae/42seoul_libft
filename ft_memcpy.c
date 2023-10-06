/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:05:17 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/06 21:09:56 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	dest;
	unsigned char	uc_src;

	dest = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = uc_src[i];
		i++;
	}
	return (dst);
}
