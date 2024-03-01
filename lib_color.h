/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_color.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:20:02 by aliaudet          #+#    #+#             */
/*   Updated: 2024/03/01 18:20:03 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_COLOR_H
# define LIB_COLOR_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0

# define DEFAULT	-1
# define BLACK		0
# define RED		1
# define GREEN		2
# define YELLOW	3
# define BLUE		4
# define PURPLE	5
# define CYAN		6
# define WHITE		7

//===========================================================================//

// Return a color code as a string to simplify to colorisation
// For exemple :
//
// printf("%sHello World\n", to_color(RED));
//
// Will print the text in red
//
// printf("%sHello %sWorld\n", to_color(RED), to_color(BLUE));
//
// Will print the "Hello" in red and "World" in blue
char	*to_color(int color_code);

//===========================================================================//

// Return a color code as a string to simplify to colorisation
// For exemple :
//
// printf("%sHello World\n", to_bold_color(RED));
//
// Will print the text in bold red
//
// printf("%sHello %sWorld\n", to_color(RED), to_bold_color(RED));
//
// Will print the "Hello" in normal red and "World" in bold red
char	*to_bold_color(int color_code);

//===========================================================================//

// Change the color output of the terminal
// For exemple :
//
// printf("Hello\n");
// change_color_output(RED);
// printf("World\n");
//
// Will print "Hello" in default color and "World" in red
void	change_output_color(int color_code);

//===========================================================================//

// Change the color output of the terminal
// For exemple :
//
// printf("Hello\n");
// change_color_output_bold(RED);
// printf("World\n");
//
// Will print "Hello" in default color and "World" in bold red
void	change_output_color_bold(int color_code);

#endif
