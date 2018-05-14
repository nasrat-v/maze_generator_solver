##
## Makefile for dante in /home/nasrat_v/rendu/Initiation_IA/dante/generateur
## 
## Made by nasrat_v
## Login   <nasrat_v@epitech.net>
## 
## Started on  Sun May 29 15:57:33 2016 nasrat_v
## Last update Mon May 14 23:43:19 2018 Valentin Nasraty
##

RM		= rm -f

NAME		= generator

SRC		= main.c \
		  tab.c \
		  lab.c \
		  print.c \
		  imperfect_lab.c \
		  my_strcmp.c

OBJS		= $(SRC:.c=.o)

CC		= gcc

LIB		= ../lib/libmy.a

CFLAGS		= -W -Wall -Wextra -Wundef -Wpointer-arith -Wcast-align -Wcast-qual -Wunreachable-code 

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) -no-pie

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

