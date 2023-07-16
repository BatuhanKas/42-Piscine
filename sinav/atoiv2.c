/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiv2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/20 13:07:03 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int pn = 1;
    int res = 0;

    while(str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
    {
        i++;
    }
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            pn = pn * -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - 48);
        i++;
    }
    return (res * pn);
}

int main()
{
    char *str = "   -+-+-1234a56";
    printf("%d", ft_atoi(str));
}