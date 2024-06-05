# implicit rules are rules that you imply the make to do the job
# by setting predefined dependencies and targets, all without
# writing user-defined, explicit rules

CC = gcc

SRCS = main.c file1.c file2.c

OBJS = $(SRCS:.c=.o)

all: program

program: $(OBJS)
	$(CC) $(OBJS) -o program

# that is implicit rule
%.o: %.c
	$(CC) -c $< -o $@

re: clean all

clean:
	rm -f program
	rm -f *.o

