/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/19 15:25:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



int main(int argc, char **argv)
{
    int i = 0;
    int sign = 1;
    int nbr = 0;

    if(argc == 1)
    {
        printf("%s", argv[0]);
    }
}