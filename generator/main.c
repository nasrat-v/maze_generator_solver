/*
** main.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante/generateur
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:57:09 2016 nasrat_v
** Last update Fri May 18 10:57:15 2018 Valentin Nasraty
*/

#include "generator.h"

int		print_usage()
{
  my_putstr("Usage: ./generator [WIDTH] [HEIGHT] ");
  my_putstr(PERFECT_ARG);
  my_putchar('/');
  my_putstr(IMPERFECT_ARG);
  my_putchar('\n');
  return (ERROR_ARGS);
}

int		check_arg(char *str)
{
  if (my_strncmp(str, IMPERFECT_ARG, 9) == 0)
    return (0);
  else if (my_strncmp(str, PERFECT_ARG, 7) == 0)
    return (1);
  return (2);
}

int		main(int ac, char **av)
{
  t_struct	st;

  if (ac == 4)
    {
      if (check_arg(av[3]) == 0 || check_arg(av[3]) == 1)
	{
	  st.x = atoi(av[1]);
	  st.y = atoi(av[2]);
	  st.i = -1;
	  st.n = ((st.y * st.x) / 4);
	  srand(time(NULL));
	  if (binary_tab(&st) == FAILURE)
	    return (FAILURE);
	  while (check_end(&st) == 0)
	    delete_wall(&st);
	  if (check_arg(av[3]) == 0)
	    while (++st.i < st.n)
	      delete_no_perfect(&st);
	  put_door(&st);
	  print_tab(&st);
	}
      else
	return (print_usage());
    }
  else
    return (print_usage());
  return (SUCCESS);
}
