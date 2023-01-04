#include "../inc/tui.h"
#include <curses.h>
#include <ncurses.h>

void ft_init_screen(t_tui *root)
{
  initscr();

  noecho();
  curs_set(0);

  getmaxyx(stdscr, root -> yMax, root -> xMax);

  root -> win = newwin(root -> yMax / 2, root -> xMax / 2, root -> yMax / 4, root -> xMax / 4);
  box(root -> win, 0, 0);

  ft_case(root);
  endwin();
}


