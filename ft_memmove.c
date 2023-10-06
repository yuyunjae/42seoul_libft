/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:14:36 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/06 21:20:55 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, int len)
{
	int				i;
	int				j;
	unsigned char	*dest;
	unsigned char	*uc_src;

	dest = (unsigned char *) dst;
	uc_src = (unsigned char *)src;
	i = 0;
	j = len;
	else if (dest > uc_src)
	{
		while (j-- > 0)
			dest[j] = uc_src[j];
	}
	else if (dest < uc_src)
	{
		while (len > i)
		{
			dest[i] = uc_src[i];
			i++;
		}
	}
	return (dst);
}
