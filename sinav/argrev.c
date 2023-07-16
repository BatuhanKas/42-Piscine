/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/19 14:28:24 by bkas             ###   ########.fr       */
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
    while(i < argc){
      while (argv[i][j] != '\0' && argv[i][j] != ' '){
        j++;
      while (argv[i][j] == ' '){
            i++;
        }
      }
    }
    
    while (argc != '\0'){
        while(argv[i][j-1] != '\0'){
            while(argv[i][j-1] == ' '){
                i--;
            }
            write(1, &argv[i][j-1], 1);
            j--;
        }
    }
}