/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/19 10:32:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_rev_print (char *str)
{
    int i = 0;

    while(str[i] != '\0'){
        i++;
    }
    
    write(1, "\n", 1);
    
    while(str[i-1] != '\0'){
        write(1, &str[i-1], 1);
        i--;
    }
    return (str);
}

int main()
{
    char str[] = "alican";
    ft_rev_print(str);
}