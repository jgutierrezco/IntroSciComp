CXXFLAGS = -fsanitize=address,undefined,leak -fprofile-arcs -ftest-coverage

all: main_factorial.x

%.x: %.o factorial.o
	g++ $(CXXFLAGS) $^ -o $@ -l Catch2Main -l Catch2

%.o: %.cpp
	g++ $(CXXFLAGS) -c $<

test: test_factorial.x
	./$< 

coverage: test_factorial.x test_es_par.x Scoverage/index.html
	./$<
	gcov factorial.cpp test_factorial.cpp test_es_par.x
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory coverage
	@echo "open file coverage/index.html" 


clean:
	rm -f *.o *.x a.out	