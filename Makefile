VPATH = util:include
CPPFLAGS = -I include
CC = gcc
objects = main.o utils.o insertion_sort.o num_util.o \
		utilxx.o

run: $(objects)
	$(CC) -o run $(objects)

all: $(objects)
$(objects): %.o: %.c
	$(CC) -c $(CPPFLAGS) $< -o $@

# all objects will consider common.h
$(objects): include/common.h

.PHONY : clean
clean:
	del run.exe $(objects)





# to learn
# objects := $(wildcard *.o)
# vpath %.c util

# 2 Question
# a rely on b, but a doesn't have a main function
# all objects rely on common.h question, and may rely on other head file