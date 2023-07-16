/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:34:47 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 11:09:48 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;  
    while (str[--i] != '\0')
        write(1, &str[i], 1);
    return (str);
}

int main(int argc, char **argv)
{
    //char dizi[] = "batuhan hashs hshs hshs";
    ft_strrev("batuhan hashs hshs hshs");
    printf("\n");
   // ft_strrev(" ");
}