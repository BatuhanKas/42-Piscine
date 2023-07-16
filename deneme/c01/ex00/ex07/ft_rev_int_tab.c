/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:16:41 by bkas              #+#    #+#             */
/*   Updated: 2023/06/19 16:17:56 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int swap;

    i = 0;
    while (i < (size / 2))
    {
        swap = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i ] = swap;
        i++;
    }
}

int main()
{
    int tab[7] = {0, 1, 2, 3, 4, 5, 6};
    int size = 7;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
}