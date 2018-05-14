/*
** read.c for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:55:40 2016 nasrat_v
** Last update Fri Oct 27 13:40:25 2017 Valentin Nasraty
*/

#include "solver.h"

int	resolve(t_struct *st, int l, int c)
{
  usleep(UTIME_TO_WAIT);
  timeout(1);
  getch();
  if (c < 0 || (c > st->x - 1) || l < 0 || (l > st->y - 1))
    return (0);
  else if (st->tab[l][c] == 'F')
    return (1);
  else if (st->tab[l][c] != '*' && st->tab[l][c] != 'D')
    return (0);
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(c, l, "o");
  attroff(COLOR_PAIR(1));
  st->tab[l][c] = 'o';
  if (resolve(st, l, (c + 1)) == 1)
    return (1);
  else if (resolve(st, (l + 1), c) == 1)
    return (1);
  else if (resolve(st, l, (c - 1)) == 1)
    return (1);
  else if (resolve(st, (l - 1), c) == 1)
    return (1);
  YELLOW;
  attron(COLOR_PAIR(2));
  mvprintw(c, l, "C");
  attroff(COLOR_PAIR(2));
  st->tab[l][c] = 'C';
  return (0);
}

int	set_begin_end(t_struct *st)
{
  if (st->tab[0][0] == 'X' || st->tab[st->y - 1][st->x - 1] == 'X')
    return (0);
  st->tab[0][0] = 'D';
  st->tab[st->y - 1][st->x - 1] = 'F';
  st->tab[st->y - 1][st->x] = 0;
  return (1);
}

void	modif_for_push(t_struct *st)
{
  int	l;
  int	c;

  l = 0;
  while (st->tab[l])
    {
      c = 0;
      while (st->tab[l][c])
	{
	  if (st->tab[l][c] == 'C')
	    st->tab[l][c] = '*';
	  else if (st->tab[l][c] == 'F')
	    st->tab[l][c] = 'o';
	  c += 1;
	}
      l += 1;
    }
}

int		read_map(t_struct *st, char *filename)
{
  struct stat	sb;
  int		fd;
  int		l;
  char		*buffer;

  if (stat(filename, &sb) == -1)
    return (1);
  if ((fd = open(filename, O_RDWR)) == -1)
    return (1);
  if ((buffer = malloc(sizeof(char) * (sb.st_size + 1))) == NULL)
    return (1);
  if (read(fd, buffer, sb.st_size) <= 0)
    return (1);
  buffer[sb.st_size - 1] = '\0';
  l = sb.st_size - 1;
  while (buffer[--l] == '\n');
  buffer[l + 1] = 0;
  close(fd);
  st->tab = my_str_to_wordtab(buffer, '\n');
  my_show_wordtab(st->tab);
  return (0);
}
