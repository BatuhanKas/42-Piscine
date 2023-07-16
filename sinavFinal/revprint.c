/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:58:54 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 12:10:48 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char *ft_rev_print (char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }
    
    while (str[--i] != '\0')
    {
        write(1, &str[i], 1);
    }
    
    return (str);    
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if(argv[1])
        {
            ft_rev_print(argv[1]);
        }
    }
    write(1, "\n", 1);
}