/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/19 16:19:56 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char* argv[])
{ 
    int i = argc - 1;
    if(argc >= 1)
    {
            printf("%s", argv[i]);
    }

/*
    int i = 1;

    if(argc > 1)
    {
        while(argv[i])
            i++;
        
        if(argv[i-1])
            printf("%s", argv[i-1]);
    }
    */
}