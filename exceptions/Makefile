all: output

output: basic_exceptions.o
	g++ -o output -std=c++11 basic_exceptions.o

standard: standard_exceptions.o
	g++ -o output -std=c++11 standard_exceptions.o

custom: custom_exceptions.o
	g++ -o output -std=c++11 custom_exceptions.o

basic_exceptions.o: basic_exceptions.cpp
	g++ -c basic_exceptions.cpp

standard_exceptions.o: standard_exceptions.cpp
	g++ -c standard_exceptions.cpp

custom_exceptions.o: custom_exceptions.cpp
	g++ -c custom_exceptions.cpp
