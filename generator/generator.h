/*
** generator.h for dante in /home/nasrat_v/rendu/Initiation_IA/dante
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Thu May 12 19:27:08 2016
** Last update Tue May 15 00:06:02 2018 Valentin Nasraty
*/

#ifndef GENERATOR_H_
# define GENERATOR_H__

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
#include <sys/stat.h>

typedef struct	s_struct
{
  int		i;
  int		n;
  int		x;
  int		y;
  int		**tab;
}		t_struct;

/* LIBMY.A */
void	my_putchar(char c);
char	*my_put_nbr(int nb);
int	my_strlen(char *str);
char	*get_next_line(const int fd);

/* TAB.C */
void	my_show_wordtab(t_struct *st);
void	modulo_tab(t_struct *st, int l, int c, int nb);
int	binary_tab(t_struct *st);

/* LAB.C */
int	check_end(t_struct *st);
void	multiple(t_struct *st, int nb, int nb2);
void	delete_wall(t_struct *st);

/* PRINT.C */
void	put_door(t_struct *st);
void	print_tab(t_struct *st);

/* !IMPERFECT_LAB.C */
void	delete_no_perfect(t_struct *st);

/* !MY_STRCMP */
int	my_strncmp(char *s1, char *s2, int n);

#endif /* !GENERATOR_H_ */
