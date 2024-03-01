/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_color.c                                        :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:22:25 by aliaudet          #+#    #+#             */
/*   Updated: 2024/03/01 18:22:28 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_color.h"

void	change_output_color(int color_code)
{
	if (color_code == BLACK)
		write(1, "\033[0;30m", 10);
	else if (color_code == RED)
		write(1, "\033[0;31m", 10);
	else if (color_code == GREEN)
		write(1, "\033[0;32m", 10);
	else if (color_code == YELLOW)
		write(1, "\033[0;33m", 10);
	else if (color_code == BLUE)
		write(1, "\033[0;34m", 10);
	else if (color_code == PURPLE)
		write(1, "\033[0;35m", 10);
	else if (color_code == CYAN)
		write(1, "\033[0;36m", 10);
	else if (color_code == WHITE)
		write(1, "\033[0;37m", 10);
	else if (color_code == DEFAULT)
		write(1, "\033[0;30m", 10);
}

void	change_output_color_bold(int color_code)
{
	if (color_code == BLACK)
		write(1, "\033[1;30m", 10);
	else if (color_code == RED)
		write(1, "\033[1;31m", 10);
	else if (color_code == GREEN)
		write(1, "\033[1;32m", 10);
	else if (color_code == YELLOW)
		write(1, "\033[1;33m", 10);
	else if (color_code == BLUE)
		write(1, "\033[1;34m", 10);
	else if (color_code == PURPLE)
		write(1, "\033[1;35m", 10);
	else if (color_code == CYAN)
		write(1, "\033[1;36m", 10);
	else if (color_code == WHITE)
		write(1, "\033[1;37m", 10);
	else if (color_code == DEFAULT)
		write(1, "\033[1;30m", 10);
}

char	*to_color(int color_code)
{
	if (color_code == BLACK)
		return ("\033[0;30m");
	else if (color_code == RED)
		return ("\033[0;31m");
	else if (color_code == GREEN)
		return ("\033[0;32m");
	else if (color_code == YELLOW)
		return ("\033[0;33m");
	else if (color_code == BLUE)
		return ("\033[0;34m");
	else if (color_code == PURPLE)
		return ("\033[0;35m");
	else if (color_code == CYAN)
		return ("\033[0;36m");
	else if (color_code == WHITE)
		return ("\033[0;37m");
	else if (color_code == DEFAULT)
		return ("\033[0;30m");
}

char	*to_bold_color(int color_code)
{
	if (color_code == BLACK)
		return ("\033[1;30m");
	else if (color_code == RED)
		return ("\033[1;31m");
	else if (color_code == GREEN)
		return ("\033[1;32m");
	else if (color_code == YELLOW)
		return ("\033[1;33m");
	else if (color_code == BLUE)
		return ("\033[1;34m");
	else if (color_code == PURPLE)
		return ("\033[1;35m");
	else if (color_code == CYAN)
		return ("\033[1;36m");
	else if (color_code == WHITE)
		return ("\033[1;37m");
	else if (color_code == DEFAULT)
		return ("\033[1;30m");
}
