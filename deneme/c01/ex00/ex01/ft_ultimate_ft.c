/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:54:34 by bkas              #+#    #+#             */
/*   Updated: 2023/06/19 13:01:47 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int x;
    int *nbr1;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;
    int *********nbr9;
    
    x = 21;

    nbr9 = &nbr8;
    nbr8 = &nbr7;
    nbr7 = &nbr6;
    nbr6 = &nbr5;
    nbr5 = &nbr4;
    nbr4 = &nbr3;
    nbr3 = &nbr2;
    nbr2 = &nbr1;
    nbr1 = &x;

    ft_ultimate_ft(nbr9);
    printf("%d", x);
}