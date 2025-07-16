/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:39:13 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/16 13:39:30 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	num;

	num = 0;
	printf("Antes de ft_ft: %d\n", num);

	ft_ft(&num);

	printf("Después de ft_ft: %d\n", num);

	return (0);
}
