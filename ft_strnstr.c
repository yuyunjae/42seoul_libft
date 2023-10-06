/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:30:23 by yuyu              #+#    #+#             */
/*   Updated: 2023/10/06 21:54:59 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str1, const char *str2, int n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;
	int				j;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (s2 == 0)
		return (s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && s1[i + j] == s2[j] && i + j < n)
		{
			j++;
			if (s2[i + j] == 0)
				return (s1 + i);
		}
		i++;
	}
	return (0);
}
