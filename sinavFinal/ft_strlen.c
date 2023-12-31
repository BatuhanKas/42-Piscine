/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:20:46 by bkas              #+#    #+#             */
/*   Updated: 2023/02/25 17:25:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char x[] = "batuhan";
    printf("%d", ft_strlen(x));
}