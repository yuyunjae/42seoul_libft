/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:17:24 by yuyu              #+#    #+#             */
/*   Updated: 2023/11/04 17:06:35 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_fine_all(char const *s, char c)
{
	int		length;
	int		i;
	int		count;
	char	before_c;

	length = ft_strlen(s);
	i = 0;
	count = 0;
	before_c = c;
	while (i < length)
	{
		if (s[i] == c && before_c != c)
		{
			count++;
		}
		before_c = s[i];
		i++;
	}
	if (before_c != c)
		count++;
	return (count);
}

// int	ft_split_last(char *str, int *check, char const *s)
// {
// 	// if (*check > 0)
// 	// {
// 	// 	str = (char *)malloc(*check + 1);
// 	// 	if (!str)
// 	// 		return (0);
// 	// 	ft_strlcpy(str, s - *check, *check + 1);
// 	// 	ans[i] = str;
// 	// }
// }

int	ft_split_all(char const *s, char **ans, int *check, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (*s)
	{
		if (*s == c && *check > 0)
		{
			str = (char *)malloc(*check + 1);
			if (!str)
				return (0);
			ft_strlcpy(str, s - *check, *check + 1);
			ans[i] = str;
			i++;
			*check = -1;
		}
		else if (*s == c)
			*check = -1;
		s++;
		(*check) += 1;
	}
	if (*check > 0)
	{
		str = (char *)malloc(*check + 1);
		if (!str)
			return (0);
		ft_strlcpy(str, s - *check, *check + 1);
		ans[i] = str;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		check;
	int		count;

	count = ft_fine_all(s, c);
	ans = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ans)
		return (0);
	check = 0;
	if (!ft_split_all(s, ans, &check, c))
		return (0);
	ans[count] = 0;
	return (ans);
}


//오류 고치고 줄 수 줄이기.

// int main()
// {
// 	char	**tabstr;
// 	int		i;

// 	i = 0;
// 	if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
//         printf("NULL");
//     else
//     {
//         while (tabstr[i] != 0)
//         {
//             printf("%s\n",tabstr[i]);
//             i++;
//         }
//     }
// }
