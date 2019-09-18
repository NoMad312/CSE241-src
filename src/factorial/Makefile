CXX = g++
LIB = -lgtest_main -lgtest
OBJS = Factorial3.o FactorialTest2.o

test: $(OBJS)
	$(CXX) -o factorialTest $(OBJS) $(LIB) && \
	./factorialTest

clean:
	rm -f factorialTest *.o
