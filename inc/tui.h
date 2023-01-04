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
  int xMax;
  int yMax;
  char c;
  WINDOW *win;
} t_tui;

void ft_init_screen(t_tui *root);
void ft_case(t_tui *root);

#endif
