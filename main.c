#include "./inc/tui.h" 
#include <curses.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  t_tui *root;
  root = (t_tui *)malloc(sizeof(t_tui));

  ft_init_screen(root);
  return 0;
}
