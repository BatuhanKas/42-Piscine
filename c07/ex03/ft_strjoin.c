/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:25 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/24 19:15:21 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	how_long(char **sarp, char *spr, int size)
{
	int	n;
	int	i;
	int	ret;

	n = 0;
	i = 0;
	while (spr[n])
	{
		n++;
	}
	ret = n * (size - 1);
	n = 0;
	while (size > n)
	{
		i = 0;
		while (sarp[n][i])
		{
			i++;
		}
		ret += i;
		n++;
	}
	return (ret + 1);
}

int	swap1(int s, int n, char *ret, char **strs)
{
	int	i;

	i = 0;
	while (strs[s][i])
	{
		ret[n] = strs[s][i];
		n++;
		i++;
	}
	return (n);
}

int	swap2(int *tt, int size, char *ret, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] && tt[0] < size)
	{
		ret[tt[1]] = sep[i];
		tt[1]++;
		i++;
	}
	return (tt[1]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		a;
	int		n;
	int		s;
	int		*tt;

	if (!size)
		return ((char *) malloc(sizeof(char)));
	a = how_long(strs, sep, size);
	ret = (char *)malloc(sizeof(char) * a);
	n = 0;
	s = 0;
	tt = (int *) malloc(sizeof(int) * 2);
	while (s < size)
	{
		n = swap1(s, n, ret, strs);
		s++;
		tt[0] = s;
		tt[1] = n;
		n = swap2(tt, size, ret, sep);
	}
	ret[a - 1] = '\0';
	return (ret);
}
