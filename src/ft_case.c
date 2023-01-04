#include "../inc/tui.h"
#include <curses.h>

void ft_case(t_tui *root)
{
  wattron(root -> win, A_STANDOUT);
  mvwprintw(root -> win, 0, 2,"Search");
  wattroff(root -> win, A_STANDOUT);
  mvwprintw(root -> win, 0, 10,"Repository");
  mvwprintw(root -> win, 0, 22,"Options");
  while (1){
    root -> c = wgetch(root -> win);
    if (root -> c == 'x'){
      break ;
    }
    else if (root -> c == 's'){
      wattron(root -> win, A_STANDOUT);
      mvwprintw(root -> win, 0, 2, "Search");
      wattroff(root -> win, A_STANDOUT);
      mvwprintw(root -> win, 0, 10,"Repository");
      mvwprintw(root -> win, 0, 22,"Options");
    }
    else if (root -> c == 'r'){
      wattron(root -> win, A_STANDOUT);
      mvwprintw(root -> win, 0, 10,"Repository");
      wattroff(root -> win, A_STANDOUT);
      mvwprintw(root -> win, 0, 2, "Search");
      mvwprintw(root -> win, 0, 22,"Options");
    }
    else if (root -> c == 'o'){
      wattron(root -> win, A_STANDOUT);
      mvwprintw(root -> win, 0, 22,"Options");
      wattroff(root -> win, A_STANDOUT);
      mvwprintw(root -> win, 0, 2, "Search");
      mvwprintw(root -> win, 0, 10,"Repository");
    }
  }
}
