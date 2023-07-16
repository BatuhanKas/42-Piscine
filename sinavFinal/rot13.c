/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 15:06:10 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   int i = 0;

    while(argv[1][i] != '\0')
    {
        if(argv[1][i] > 64 && argv[1][i] < 91)
        {
            if(argv[1][i] <= 'M')
            {
                argv[1][i] = argv[1][i] + 13; 
            }
            else
            {
                argv[1][i] = argv[1][i] - 13;
            }
        }

        else if(argv[1][i] > 96 && argv[1][i] < 123)
        {
            if(argv[1][i] <= 'm')
            {
                argv[1][i] = argv[1][i] + 13;
            }
            else
            {
                argv[1][i] = argv[1][i] - 13;
            }
        }
        i++;
    }
    printf("%s",argv[1]);
}