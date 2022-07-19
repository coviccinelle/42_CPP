# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 18:18:06 by thi-phng          #+#    #+#              #
#    Updated: 2022/07/19 13:07:47 by thi-phng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03_Intern_At_least_this_beats_coffee_making
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

ifeq ($(DEBUG), 1)
	CFLAGS		+= -DDEBUG
endif

RM		=	rm -rf
SRC		=	Bureaucrat.cpp \
			Form.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp \
			main.cpp 

OBJDIR	=	objs
OBJ		=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

.SILENT:
SHELL	:= bash
CRED 	= \033[0;31m
CGRIS	= \033[0;214m
CWHITE	= \033[0;37m
CYELLOW	= \033[1;33m
CGREEN 	= \033[0;32m
CCYAN 	= \033[1;36m
CBLUE 	= \033[0;34m
CPURPLE	= \033[0;35m
B 	=	$(shell tput bold)
D =		$(shell tput sgr0)


all: TITLE launch $(NAME)
	@printf "\n$(B)$(CCYAN)$(NAME) compiled$(D)\n\n"

TITLE:
	printf "${CRED}  _   ${CGRIS} _     ${CYELLOW}_  ${CGREEN}    ${CCYAN}       ${CBLUE} _     ${CPURPLE}     ${CRED}      \n"
	printf "${CRED} | |_ ${CGRIS}| |_  ${CYELLOW}(_)${CGREEN} ___ ${CCYAN} _ __  ${CBLUE}| |_   ${CPURPLE}_ _  ${CRED} __ _ \n"
	printf "${CRED} |  _|${CGRIS}| ' \\ ${CYELLOW}| |${CGREEN}|___|${CCYAN}| '_ \\ ${CBLUE}| ' \\ ${CPURPLE}| ' \\ ${CRED}/ _\` |\n"
	printf "${CRED}  \__|${CGRIS}|_||_|${CYELLOW}|_|${CGREEN}     ${CCYAN}| .__/ ${CBLUE}|_||_|${CPURPLE}|_||_|${CRED}\\__, |\n"
	printf "${CRED}      ${CGRIS}      ${CYELLOW}   ${CGREEN}     ${CCYAN}|_|     ${CBLUE}     ${CPURPLE}      ${CRED}|___/ \n"
	printf "${CYELLOW}"
	@echo Clumsy ${NAME} is on the way!


 # ******************************************************************************* #
define  progress_bar
        @i=0; \
        while [[ $$i -le $(words $(SRCS)) ]]; do \
                printf " "; \
                ((i = i + 1)); \
        done; \
		printf "$(B)$(CWHITE)]\r[$(CGREEN)";
endef
 # ******************************************************************************* #

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "${B}${CWHITE}]\n"

${OBJDIR}/%.o:${SRCDIR}%.cpp
	@mkdir -p objs
	@$(CC) $(CFLAGS) -c $< -o $@
	printf "█"

launch:
	$(call progress_bar)

clean:
	$(RM) $(OBJDIR) *_shrubbery
	@echo "$(B)Cleared$(D)"

fclean:			clean
	$(RM) $(NAME) ${RM} objs

re:				fclean all

debug		:	fclean
				$(MAKE) DEBUG=1

.PHONY:			all clean fclean re launch debug
