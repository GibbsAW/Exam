OBJS	= programme.o
SOURCE	= programme.cc
HEADER	= 
OUT	= count
CC	 = g++

FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

doc:
	@doxygen
	@open doxygen/html/index.html

check:
	@cppcheck --enable=all --inconclusive --xml-version=2 -v programme.cc
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./count

programme.o: programme.cc
	$(CC) $(FLAGS) programme.cc 


clean:
	rm -f $(OBJS) $(OUT)