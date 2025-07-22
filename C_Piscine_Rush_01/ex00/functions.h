/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matroche <matroche@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:16:57 by matroche          #+#    #+#             */
/*   Updated: 2025/07/20 16:51:01 by matroche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	initialize_matrix(int matrix[4][4]);
void	print_matrix(int matrix[4][4]);
int		is_valid(int matrix[4][4], int fila, int col, int val);
int		visible_count(int *line);
int		restriction(int matrix[4][4], int input[16]);
int		backtrack_rush(int matrix[4][4], int input[16], int fila, int col);
void	rush_01(int input[16]);
int		validate_argv(char *str, int *input);

#endif // FUNCTIONS_H
