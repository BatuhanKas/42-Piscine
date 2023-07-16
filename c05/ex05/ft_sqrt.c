/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:55:39 by bkas              #+#    #+#             */
/*   Updated: 2023/02/23 17:22:56 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
	{
		return (0);
	}
	i = 1;
	while (i * i <= nbr)
	{
		if (i * i == nbr)
		{
			return (i);
		}
		i++;
	}
	return (0);
}