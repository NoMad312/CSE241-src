CXX = g++
LIB = -lgtest_main -lgtest
SORT3_OBJS = Sort3.o Sort3Test.o
CONVERT_TIME_OBJS = ConvertTime.o ConvertTimeTest.o

sort3_test: $(SORT3_OBJS)
	$(CXX) -o sort3Test $(SORT3_OBJS) $(LIB) && \
	./sort3Test

convert_time_test: $(CONVERT_TIME_OBJS) ConvertTime.hpp
	$(CXX) -o convertTimeTest $(CONVERT_TIME_OBJS) $(LIB) && \
	./convertTimeTest

clean:
	rm -f sort3Test convertTimeTest *.o
