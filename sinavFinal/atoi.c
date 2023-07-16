/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:47:11 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 13:49:11 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int pn = 1;
    int result = 0;

    while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            pn = pn * -1;
        }
        else
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    return (result * pn);
}

int main()
{
    char dizi[] = "      +--+-3152abc315245";
    printf("%d", ft_atoi(dizi));
}