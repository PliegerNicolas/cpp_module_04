# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicolas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 15:02:08 by nicolas           #+#    #+#              #
#    Updated: 2023/06/13 09:38:41 by nplieger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#* ************************************************************************** *#
#* *                                 UTILS                                  * *#
#* ************************************************************************** *#

NAME			=			a.out
CC				=			c++
CFLAGS			=			-std=c++98 -pedantic
RUN_PARAM		=			

#* ************************************************************************** *#
#* *                                SOURCES                                 * *#
#* ************************************************************************** *#

SRCS_EXTENSION	=			.cpp
SRCS_PATH		=			srcs
MAIN_NAME		=			main

SRCS_NAMES		=			Animal \
							Dog	\
							Cat \
							Brain \

#* ************************************************************************** *#
#* *                               INCLUDES                                 * *#
#* ************************************************************************** *#

INCLUDE_DIRS	=			includes

#* ************************************************************************** *#
#* *                                OBJECTS                                 * *#
#* ************************************************************************** *#

OBJS_PATH		=			./objs

MAIN			=			$(addsuffix $(SRCS_EXTENSION), $(MAIN_NAME))
SRCS			=			$(addsuffix $(SRCS_EXTENSION), $(SRCS_NAMES))

OBJS			=			$(addprefix $(OBJS_PATH)/, ${SRCS:$(SRCS_EXTENSION)=.o})
OBJ_MAIN		=			$(addprefix $(OBJS_PATH)/, ${MAIN:$(SRCS_EXTENSION)=.o})
OBJS_DEPEND		=			$(addprefix $(OBJS_PATH)/, ${SRCS:$(SRCS_EXTENSION)=.d})
OBJ_MAIN_DEPEND	=			$(addprefix $(OBJS_PATH)/, ${MAIN:$(SRCS_EXTENSION)=.d})

INCLUDE_FLAGS	=			$(addprefix -I , ${INCLUDE_DIRS})

#* ************************************************************************** *#
#* *                               CONSTANTS                                * *#
#* ************************************************************************** *#

BLUE			=			\033[1;34m
CYAN			=			\033[0;36m
GREEN			=			\033[0;32m
ORANGE			=			\033[0;33m
NO_COLOR		=			\033[m

#* ************************************************************************** *#
#* *                                MAKEFILE                                * *#
#* ************************************************************************** *#

ifeq (noflag, $(filter noflag,$(MAKECMDGOALS)))
	CFLAGS		+=			-Wall -Wextra
else
	CFLAGS		+=			-Wall -Wextra -Werror
endif

ifeq (debug, $(filter debug,$(MAKECMDGOALS)))
	CFLAGS		+=			-g3
endif

ifeq (sanaddress, $(filter sanaddress,$(MAKECMDGOALS)))
	CFLAGS		+=			-fsanitize=address
endif

ifeq (santhread, $(filter santhread,$(MAKECMDGOALS)))
	CFLAGS		+=			-fsanitize=thread
endif

ifeq (optimize, $(filter optimize,$(MAKECMDGOALS)))
	CFLAGS		+=			-O3
endif

#* ************************************************************************** *#
#* *                                 RULES                                  * *#
#* ************************************************************************** *#

all:				$(NAME)

# ----- #

$(OBJS_PATH)/%.o:	$(SRCS_PATH)/%$(SRCS_EXTENSION)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MF $(@:.o=.d) ${INCLUDE_FLAGS} -c $< -o $@

# ----- #

clean:
	rm -rf $(OBJS_PATH)

fclean:				clean
	rm -f $(NAME)

re:					fclean all

# ----- #

-include $(OBJS_DEPEND) $(OBJ_MAIN_DEPEND)
$(NAME):			${OBJS} ${OBJ_MAIN}
	$(CC) $(CFLAGS) -o $@ ${OBJS} ${OBJ_MAIN}

# ----- #

run:				all
	./$(NAME) $(RUN_PARAM)

noflag:				all

debug:				all

sanaddress:			all

santhread:			all

optimize:			all

# ----- #

.PHONY: all clean fclean re run debug sanaddress santhread optimize
