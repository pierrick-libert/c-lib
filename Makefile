#
# @Author: Pierrick Libert
# @Date:   2021-03-19 11:45:17
# @Last Modified by:   plibert
# @Last Modified time: 2021-03-19 11:45:19
#

# define the C compiler to use
CC = gcc

# define any compile-time flags
CFLAGS = -Wall -Wextra -Werror -g

# define the C source files
SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

# define the executable file
MAIN = mycc

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)


.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~

fclean: clean
	$(RM) $(MAIN)

re: fclean all
