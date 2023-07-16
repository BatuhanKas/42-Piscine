/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r13.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:07:13 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 15:15:00 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;


    while(argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            if (argv[1][i] <= 'M')
                argv[1][i] = argv[1][i] + 13;
            else
                argv[1][i] = argv[1][i] - 13;
        }

        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            if (argv[1][i] <= 'm')
                argv[1][i] = argv[1][i] + 13;
            else
                argv[1][i] = argv[1][i] - 13;
        }
        i++;
    }              
    printf("%s",argv[1]);
}