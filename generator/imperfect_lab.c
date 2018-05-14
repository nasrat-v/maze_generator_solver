/*
** imperfect_lab.c for dante in /home/nasrat_v/rendu/Initiation_IA/etoile_de_dante/laby_imparfait
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon May 16 20:25:39 2016
** Last update Tue May 15 00:05:34 2018 Valentin Nasraty
*/

#include "generator.h"

void	delete_no_perfect(t_struct *st)
{
  int	l;
  int	c;

  l = (rand() % st->y);
  c = (rand() % st->x);
  if (st->tab[l][c] == 0)
    {
      if (c > 0 && c < (st->x - 1) && l >= 0 &&
	  st->tab[l][c + 1] !=  st->tab[l][c])
	st->tab[l][c] = st->tab[l][c + 1];
    }
  else
    delete_no_perfect(st);
}
