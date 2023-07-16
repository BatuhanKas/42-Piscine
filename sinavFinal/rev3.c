/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:37:36 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 11:46:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    while (str[i] != '\0')
    {
        i++;
    }

    len = i - 1;
    i = 0;
    while (len > i)
    {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        i++;
        len--;
    }
    return (str);
    
}

int main()
{
    char str[] = "batuhan";
    ft_strrev(str);
    printf("%s", str);
}
