/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/20 13:18:04 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;

    if(argc == 2)
    {
        while(argv[i][j] != '\0')
        {
            j++;
        }
        /*
        while(argv[i][j-1] == '\0' || argv[i][j-1] == ' ')
        {
            j--;
        }
        */
        while(argv[i][j-1] >= 'A' && argv[i][j-1] <= 'Z' || argv[i][j-1] >= 'a' && argv[i][j-1] <= 'z')
        {
            j--;
        }

        j++;
        while(argv[i][j-1] != '\0' && argv[i][j-1] != ' ')
        {
            write(1, &argv[i][j-1], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

/*
j = 0;
        while(argv[i][j] == '\0' || argv[i][j] == ' ')
            i++;
        
        j = 0;
        while(argv[i][j] != '\0' && argv[i][j] != ' '){
            write(1, &argv[i][j], 1);
            j++;
        }
*/