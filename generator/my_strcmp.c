/*
** my_strcmp.c for dante in /home/nasrat_v/rendu/Initiation_IA/etoile_de_dante/generateur/perf_lab
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Thu May 19 19:29:46 2016
** Last update Fri Oct 27 13:33:03 2017 Valentin Nasraty
*/

#include "generator.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      else if (s1[i] == '\0')
	return (0);
      i += 1;
    }
  return (0);
}
