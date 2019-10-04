CXX = g++
LIB = -lgtest_main -lgtest
SORT3_OBJS = Sort3.o Sort3Test.o

sort3_test: $(SORT3_OBJS)
	$(CXX) -o swap3Test $(SORT3_OBJS) $(LIB) && \
	./swap3Test

clean:
	rm -f sort3Test *.o
