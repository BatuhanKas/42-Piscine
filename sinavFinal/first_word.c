/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/27 11:36:41 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    /* eğer içi nullsa veya içinde sadece boşluk varsa hiç birşey yazma.
    harf sayısı 1'den fazlaysa boşluk görene kadar git veya null olana kadar git.
    eğer harf sayısı 1'e eşitse hiç bir şey yazma.
    eğer başında boşluk varsa boşlukları atla ve ilk kelimeyi yaz. */

    int i = 1;
    int j = 0;

    if (argc == 2){
        while (argv[i][j] == ' '){
            j++;
        }      
        if (argv[i][j] != '\0' && argv[i][j] != ' '){
            while (argv[i][j] != ' ' && argv[i][j] != '\0'){
                write(1, &argv[i][j], 1);
                j++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}