/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:00:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/23 15:21:29 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (res);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (power >= 2)
	{
		res = res * nb;
		power = power - 1;
	}
	return (res);
}
