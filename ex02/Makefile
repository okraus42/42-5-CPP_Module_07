# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 10:52:31 by okraus            #+#    #+#              #
#    Updated: 2024/05/30 15:39:05 by okraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Array
SRCS		=	main.cpp colours.cpp
HEADERS		=	Array.hpp Array.tpp colours.hpp
OBJS		=	$(SRCS:.cpp=.o)
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g
CPP			=	c++

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HEADERS)
			$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
