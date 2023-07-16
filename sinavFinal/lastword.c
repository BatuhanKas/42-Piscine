/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/27 11:38:32 by bkas             ###   ########.fr       */
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
        j = j - 1;
        
        while(argv[i][j] == 32)
        {
            j--;
        }
        
        while((argv[i][j] >= 33 && argv[i][j] <= 126) && argv[i][j] != 32)
        {
            j--;
        }
        
        j++;
        while((argv[i][j] >= 33 && argv[i][j] <= 126) && argv[i][j] != 32)
        {
            write(1, &argv[i][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}