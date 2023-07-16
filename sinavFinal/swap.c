/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:26:17 by bkas              #+#    #+#             */
/*   Updated: 2023/02/25 17:30:56 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap = 0;
    swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int a = 5;
    int b = 3;
    printf("a: %d, b: %d\n", a, b);
    ft_swap(&a, &b);
    printf("a: %d, b: %d", a, b);
}