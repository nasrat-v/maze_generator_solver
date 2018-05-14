/*
** main.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante/generateur
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:57:09 2016 nasrat_v
** Last update Fri Oct 27 13:32:51 2017 Valentin Nasraty
*/

#include "generator.h"

int		check_arg(char *str)
{
  if (my_strncmp(str, "imparfait", 9) == 0)
    return (0);
  else if (my_strncmp(str, "parfait", 7) == 0)
    return (1);
  return (2);
}

void		check_param(int ac, char **av, t_struct *st)
{
  if (ac == 3)
    {
      st->x = atoi(av[1]);
      st->y = atoi(av[2]);
      st->i = -1;
      st->n = ((st->y * st->x) / 4);
      srand(time(NULL));
      binary_tab(st);
      while (check_end(st) == 0)
	delete_wall(st);
      while (++st->i < st->n)
	delete_no_perfect(st);
      put_door(st);
      print_tab(st);
    }
}

int		main(int ac, char **av)
{
  t_struct	st;

  check_param(ac,av, &st);
  if (ac == 4)
    {
      if (check_arg(av[3]) == 0 || check_arg(av[3]) == 1)
	{
	  st.x = atoi(av[1]);
	  st.y = atoi(av[2]);
	  st.i = -1;
	  st.n = ((st.y * st.x) / 4);
	  srand(time(NULL));
	  binary_tab(&st);
	  while (check_end(&st) == 0)
	    delete_wall(&st);
	  if (check_arg(av[3]) == 0)
	    while (++st.i < st.n)
	      delete_no_perfect(&st);
	  put_door(&st);
	  print_tab(&st);
	}
    }
  return (0);
}
