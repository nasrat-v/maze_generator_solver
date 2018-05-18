/*
** tab.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Thu May 12 19:28:16 2016
** Last update Fri May 18 10:43:18 2018 Valentin Nasraty
*/

#include "generator.h"

void	my_show_wordtab(t_struct *st)
{
  int	l;
  int	c;

  l = 0;
  while (l < st->y)
    {
      c = 0;
      while (c < st->x)
	{
	  my_put_nbr(st->tab[l][c]);
	  my_putchar(' ');
	  c += 1;
	}
      my_putchar('\n');
      l += 1;
    }
}

void	modulo_tab(t_struct *st, int l, int c, int nb)
{
  if ((l % 2) == 1)
    st->tab[l][c] = 0;
  else if ((c % 2) == 1)
    st->tab[l][c] = 0;
  else
    st->tab[l][c] = nb;
}

int	binary_tab(t_struct *st)
{
  int	l;
  int	c;
  int	nb;

  l = 0;
  nb = 1;
  if ((st->tab = malloc(sizeof(int *) * st->y)) == NULL)
    return (FAILURE);
  while (l < st->y)
    {
      c = 0;
      if ((st->tab[l] = malloc(sizeof(int) * st->x)) == NULL)
	return (FAILURE);
      while (c < st->x)
	{
	  modulo_tab(st, l, c, nb);
	  if (st->tab[l][c] != 0)
	    nb += 1;
	  c += 1;
	}
      l += 1;
    }
  return (SUCCESS);
}
