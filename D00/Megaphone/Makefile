CC = g++
CFLAGS = -g -Wall
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

EXEC = megaphone

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

clean:
	$(RM) *.o *~ $(EXEC)
