/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:00:10 by bkas              #+#    #+#             */
/*   Updated: 2023/06/20 17:35:13 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*res;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	res = (int *)malloc(sizeof(*res) * size);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
