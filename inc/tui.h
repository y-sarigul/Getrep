/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:25:55 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:25:57 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TUI_H
# define TUI_H

# include <ncurses.h>
# include <curses.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_tui
{
} t_tui;

void ft_init_screen();
void ft_cursor_move();

#endif
