/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:39:19 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 01:27:40 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	int	result;
	
	result = 1;
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}