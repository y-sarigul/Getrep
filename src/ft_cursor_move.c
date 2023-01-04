#include <curses.h>
#include "../inc/tui.h"

void ft_cursor_move()
{
  int x;
  int y;
  int c;
  
  x = 5;
  y = 9;
  ft_init_screen();
  move(x, y);
  while (1)
    {
      c = getch();
      if (c == 106)
      {
        clear();
        ft_init_screen();
        x += 1;
        move(x, y);
      }
    }
}
