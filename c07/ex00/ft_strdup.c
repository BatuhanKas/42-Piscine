/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:01:21 by bkas              #+#    #+#             */
/*   Updated: 2023/02/25 11:01:24 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*sonuc;
	int		i;

	i = 0;
	sonuc = malloc(sizeof(*src));
	if (sonuc == 0)
		return (0);
	while (src[i] != '\0')
	{
		sonuc[i] = src[i];
		i++;
	}
	sonuc[i] = '\0';
	return (sonuc);
}
