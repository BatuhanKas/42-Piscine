/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:48:05 by bkas              #+#    #+#             */
/*   Updated: 2023/02/24 11:31:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {1, 12, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }

    int *b = (int *)malloc(sizeof(int)*5);
    b[3] = 8;
    b[0] = 3;
    *(b+1) = 10;
    *(b+2) = 7;
    b[4] = 14;
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", b[i]);
    }
    
}