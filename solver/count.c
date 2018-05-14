/*
** count.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:55:08 2016 nasrat_v
** Last update Fri Oct 27 13:34:18 2017 Valentin Nasraty
*/

#include "solver.h"

int	my_count_col(char **tab)
{
  int	c;

  c = 0;
  while (tab[0][c])
    c += 1;
  return (c);
}

int	my_tablen(char **tab)
{
  int	i;

  i = 0;
  while (tab && tab[i])
    i += 1;
  return (i);
}
