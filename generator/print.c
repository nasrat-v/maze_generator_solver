/*
** print.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante/generateur
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:58:20 2016 nasrat_v
** Last update Fri Oct 27 13:33:11 2017 Valentin Nasraty
*/

#include "generator.h"

void	put_door(t_struct *st)
{
  int	l;
  int	c;

  l = 0;
  while (l < st->y)
    {
      c = 0;
      while (c < st->x)
	c += 1;
      l += 1;
    }
  st->tab[l - 1][c - 2] = 1;
  st->tab[l - 1][c - 1] = 1;
}

void	print_tab(t_struct *st)
{
  int	l;
  int	c;

  l = 0;
  while (l < st->y)
    {
      c = 0;
      while (c < st->x)
	{
	  if (st->tab[l][c] != 0)
	    write(1, "*", 1);
	  else if (st->tab[l][c] == 0)
	    write(1, "X", 1);
	  c += 1;
	}
      if (st->tab[l + 1] != NULL)
	write(1, "\n", 1);
      l += 1;
    }
}
