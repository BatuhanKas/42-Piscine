/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:26:23 by bkas              #+#    #+#             */
/*   Updated: 2023/02/23 15:24:39 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (result);
	}
	else if (power < 0)
	{
		return (0);
	}
	if (power >= 2)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (result);
}
