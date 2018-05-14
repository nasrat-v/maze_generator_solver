##
## Makefile for Makefile in /home/nasrat_v/rendu/Initiation_IA/dante
## 
## Made by nasrat_v
## Login   <nasrat_v@epitech.net>
## 
## Started on  Sun May 29 15:56:10 2016 nasrat_v
## Last update Mon May 14 23:46:20 2018 Valentin Nasraty
##

RM		= rm -f

NAME		= solver

SRC		= main.c \
		  read.c \
		  count.c \
		  my_str_to_wordtab.c

OBJS		= $(SRC:.c=.o)

CC		= gcc

CFLAGS		= -W -Wall -Wextra -Wundef -Wpointer-arith -Wcast-align -Wcast-qual -Wunreachable-code

NCURSES		= -lncurses -ltinfo

LIB		= ../lib/libmy.a

all:		$(NAME) $(NAME2) $(NAME3) $(NAME4)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) $(NCURSES) -no-pie

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME) $(NAME2) $(NAME3) $(NAME4)

re: 		fclean all
