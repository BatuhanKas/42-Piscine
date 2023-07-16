/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:28:59 by bkas              #+#    #+#             */
/*   Updated: 2023/06/20 14:03:26 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    while (src[n])
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return dest;
}

int main()
{
    char dest[] = "batuhan";
    char src[] = "alican";
    printf("%s", ft_strncpy(dest, src, 3));
}