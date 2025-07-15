/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 04:09:42 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/13 04:14:15 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while(1)
	{
		i = 0;
		int	swap;
		
		swap = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i+1])
			{
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
		if (!swap)
			break;
	}
}
