/*
** main.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:55:19 2016 nasrat_v
** Last update Fri Oct 27 13:41:07 2017 Valentin Nasraty
*/

#include "solver.h"

void		init_ncurses()
{
  SCREEN	*win;
  
  win = newterm(NULL, stderr, stdin);
  set_term(win);
  refresh();
  keypad(stdscr, 1);
  curs_set(0);
  start_color();
  noecho();
}

int		main(int ac, char **av)
{
  t_struct	st;

  if (ac == 2)
    {
      if ((read_map(&st, av[1])) == 1)
      	return (0);
      st.y = my_tablen(st.tab);
      st.x = my_count_col(st.tab);
      init_ncurses();
      my_show_wordtab(st.tab);
      if ((set_begin_end(&st)) == 0)
	{
      	  write(1, "No solution found\n", my_strlen("No solution found\n"));
      	  return (0);
      	}
      if ((resolve(&st, 0, 0)) == 0)
      	{
      	  write(1, "No solution found\n", my_strlen("No solution found\n"));
      	  return (0);
      	}
      modif_for_push(&st);
      my_putchar('\n');
    }
  else
    return (1);
  endwin();
  return (0);
}
