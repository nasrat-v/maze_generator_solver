/*
** solver.h for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by nasrat_v
** Login   <nasrat_v@epitech.net>
**
** Started on  Sun May 29 15:55:29 2016 nasrat_v
** Last update Mon May 14 23:53:50 2018 Valentin Nasraty
*/

#ifndef SOLVER_H_
# define SOLVER_H_

# define RED		init_pair(1, COLOR_RED, COLOR_RED)
# define YELLOW		init_pair(2, COLOR_YELLOW, COLOR_YELLOW)
# define BLUE		init_pair(3, COLOR_BLUE, COLOR_BLUE)
/* Time in milliseconds of the slows motion */
# define UTIME_TO_WAIT	500

#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <curses.h>
#include <ncurses.h>

typedef struct	s_struct
{
  char		**tab;
  int		a;
  int		b;
  int		i;
  int		n;
  int		x;
  int		y;
}		t_struct;

/* !LIBMY.A */
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
char	*get_next_line(const int fd);

/* !READ.C */
int	resolve(t_struct *st, int l, int c);
int	set_begin_end(t_struct *st);
void	modif_for_push(t_struct *st);
int	read_map(t_struct *st, char *filename);

/* !MY_STR_TO_WORDTAB */
int	nb_mot(char *str, char sep);
int	nb_mot_bis(char *str, char sep1, char sep2);
char	**my_str_to_wordtab(char *str, char sep);
char	**my_str_to_wordtab_bis(char *str, char sep1, char sep2);
void	my_show_wordtab(char **tab);

/* !COUNT.C */
int	my_count_col(char **tab);
int	my_tablen(char **tab);

#endif /* !SOLVER_H_ */
