/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/20 11:34:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    i = 1;
    j = 0;
    k = 0;
    
    if(argc > 1)
    {
        while(argv[i][j] != '\0')
        {
            if(argv[i][j] == 'Z')
            {
                k++;
            }
            j++;
        }
        printf("%d", k);
        return (k);
    }
}