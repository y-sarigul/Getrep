#include "./inc/tui.h" 
#include <curses.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  int yMax;
  int xMax;

  initscr();

  noecho(); // her hangi bir tusa basildigi zaman o tusun ciktisini vermemesi icin
  curs_set(0); // cursor yok eder

  getmaxyx(stdscr, yMax, xMax);

  WINDOW  *win = newwin(yMax / 2, xMax / 2, yMax / 4, xMax / 4);
  box(win, 0, 0);

  mvwprintw(win, 0, 2,"File");
  mvwprintw(win, 0, 7,"Edit");
  mvwprintw(win, 0, 12,"Options");

  char ch;
  while (ch = wgetch(win))
    {
      if (ch == 'c')
      {
        break;
      }
      else if (ch == 'f')
      {
        wattron(win, A_STANDOUT);
        mvwprintw(win, 0, 2,"File");
        wattroff(win, A_STANDOUT);
        mvwprintw(win, 0, 7,"Edit");
        mvwprintw(win, 0, 12,"Options");
      }
      else if (ch == 'e')
      {
        wattron(win, A_STANDOUT);
        mvwprintw(win, 0, 7,"Edit");
        wattroff(win, A_STANDOUT);
        mvwprintw(win, 0, 2,"File");
        mvwprintw(win, 0, 12,"Options");
      }
      else if (ch == 'o')
      {
        wattron(win, A_STANDOUT);
        mvwprintw(win, 0, 12,"Options");
        wattroff(win, A_STANDOUT);
        mvwprintw(win, 0, 2,"File");
        mvwprintw(win, 0, 7,"Edit");
      }
      else
      {
        mvwprintw(win, 0, 2,"File");
        mvwprintw(win, 0, 7,"Edit");
        mvwprintw(win, 0, 12,"Options");
      }
    }

  endwin();
  return 0;
}
