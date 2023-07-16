/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:53:01 by bkas              #+#    #+#             */
/*   Updated: 2023/06/20 16:53:59 by bkas             ###   ########.tr       */
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
