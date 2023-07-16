/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:04:11 by bkas              #+#    #+#             */
/*   Updated: 2023/06/20 14:47:41 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;
    
    if (str[i])
    {
        while (str[i] != '\0')
        {
            if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
            {
                i++;
            }
            else
                return 0;
        }
        return 1;
    }
    else    
        return 1;
}

int main()
{
    char dizi[] = "wannaplaysomednd";
    printf("%d", ft_str_is_alpha(dizi));
}