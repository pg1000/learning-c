EXENAME = main
OBJS = main.o

CXX = gcc
CXXFLAGS = -Wall -Wextra -pedantic
LD = gcc

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) -o $(EXENAME)

main.o : main.c
	$(CXX) $(CXXFLAGS) -c -o main.o main.c

clean :
	-rm -f *.o *.out $(EXENAME)
