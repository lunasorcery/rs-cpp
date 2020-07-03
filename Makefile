CXX ?= clang

.PHONY: test clean

hello: hello.cpp
	$(CXX) hello.cpp -o hello -I. -std=c++17 -Wall -Wextra

test: hello
	./hello

clean:
	rm -f hello
