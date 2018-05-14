/*
** my_str_to_wordtab.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:56:21 2016 nasrat_v
** Last update Fri Oct 27 13:34:46 2017 Valentin Nasraty
*/

#include "solver.h"

int	nb_mot(char *str, char sep)
{
  int	i;
  int	nb;

  i = 0;
  nb = 1;
  while (str[i] != 0)
    {
      if (str[i] == sep)
	nb = nb + 1;
      i = i + 1;
    }
  return (nb);
}

int	nb_mot_bis(char *str, char sep1, char sep2)
{
  int	i;
  int	nb;

  i = 0;
  nb = 1;
  while (str[i] != 0)
    {
      if (str[i] == sep1 && str[i + 1] == sep2)
	nb = nb + 1;
      i = i + 1;
    }
  return (nb);
}

char	**my_str_to_wordtab(char *str, char sep)
{
  char	**tab;
  int	i;
  int	j;

  if ((tab = malloc((nb_mot(str, sep) + 1) * sizeof(char*))) == NULL)
    return (NULL);
  tab[nb_mot(str, sep)] = NULL;
  i = 0;
  j = 1;
  tab[0] = str;
  while (str[i] != 0)
    {
      if (str[i] == sep)
	{
	  str[i] = 0;
	  i = i + 1;
	  tab[j] = &str[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  return (tab);
}

char	**my_str_to_wordtab_bis(char *str, char sep1, char sep2)
{
  char	**tab;
  int	i;
  int	j;

  if ((tab = malloc((nb_mot_bis(str, sep1, sep2) + 1) * sizeof(char*))) == NULL)
    return (NULL);
  tab[nb_mot_bis(str, sep1, sep2)] = NULL;
  i = 0;
  j = 1;
  tab[0] = str;
  while (str[i] != 0)
    {
      if (str[i] == sep1 && str[i + 1] == sep2)
	{
	  str[i] = 0;
	  i = i + 1;
	  tab[j] = &str[i + 1];
	  j = j + 1;
	}
      i = i + 1;
    }
  return (tab);
}

void	my_show_wordtab(char **tab)
{
  int	i;
  int	c;

  i = 0;
  BLUE;
  attron(COLOR_PAIR(3));
  while (tab[i] != NULL)
    {
      c = 0;
      while (tab[i][c])
	{
	  if (tab[i][c] == 'X')
	    mvprintw(c, i, "N");
	  c += 1;
	}
      i += 1;
    }
  attroff(COLOR_PAIR(3));
}
