/*
** lab.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Thu May 12 19:26:57 2016
** Last update Tue May 15 00:04:21 2018 Valentin Nasraty
*/

#include "generator.h"

int	check_end(t_struct *st)
{
  int	l;
  int	c;
  int	nb;

  l = 0;
  nb = st->tab[0][0];
  while (l < st->y)
    {
      c = 0;
      while (c < st->x)
	{
	  if (st->tab[l][c] != 0 && st->tab[l][c] != nb)
	    return (0);
	  c += 1;
	}
      l += 1;
    }
  return (1);
}

void	multiple(t_struct *st, int nb, int nb2)
{
  int	l;
  int	c;

  l = 0;
  while (l < st->y)
    {
      c = 0;
      while (c < st->x)
	{
	  if (st->tab[l][c] == nb2)
	    st->tab[l][c] = nb;
	  c += 1;
	}
      l += 1;
    }
}

void	delete_wall(t_struct *st)
{
  int	l;
  int	c;

  l = (rand() % st->y);
  c = (rand() % st->x);
  if (st->tab[l][c] == 0)
    {
      if (c > 0 && c < (st->x - 1) && l >= 0 &&
	  st->tab[l][c + 1] != st->tab[l][c - 1] &&
	  st->tab[l][c + 1] != 0 && st->tab[l][c - 1] != 0)
	{
	  multiple(st, st->tab[l][c + 1], st->tab[l][c - 1]);
	  st->tab[l][c] = st->tab[l][c + 1];
	}
      if (l > 0 && l < (st->y - 1) && c >= 0 &&
	       st->tab[l - 1][c] != st->tab[l + 1][c] &&
	       st->tab[l - 1][c] != 0 && st->tab[l + 1][c] != 0)
	{
	  multiple(st, st->tab[l + 1][c], st->tab[l - 1][c]);
	  st->tab[l][c] = st->tab[l + 1][c];
	}
    }
}
