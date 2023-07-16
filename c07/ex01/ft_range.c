/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:06:58 by bkas              #+#    #+#             */
/*   Updated: 2023/02/25 11:07:07 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		n;

	n = 0;
	ptr = malloc(sizeof(int *) * (max - min));
	if (max <= min || ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (min < max)
	{
		ptr[n] = min;
		min++;
		n++;
	}
	return (ptr);
}
