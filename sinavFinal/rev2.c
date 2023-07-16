/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:09:59 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 11:21:34 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int len;
    char temp;

    while (str[i] != '\0')
    {
        i++;
    }
    
    len = i - 1;
    i = 0;
    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}

int main()
{
    char str[] = "batuhan asdfsdaf asdf adsf asdf sdf";
    ft_strrev(str);
    printf("%s", str);
}