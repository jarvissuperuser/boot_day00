# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 15:30:27 by tmugadza          #+#    #+#              #
#    Updated: 2017/05/23 11:10:09 by tmugadza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S = main.cpp control.cpp phonebook.cpp
O = main.o control.o phonebook.o
F = -Werror -Wextra -Wall
C = clang++
T = phonebook 

all : $(T)
$(T) : $(O)
	$(C) $(F) $(O)	-o $(T)
$(O) :
	$(C) $(F) -c $(S) 
clean :
	rm $(T)
fclean : 
	rm $(O) $(T)
