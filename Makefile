program : main.o class.o fun1.o fun2.o
	g++ -o program main.o class.o fun1.o fun2.o 
main.o : main.cpp
	g++ -c main.cpp
class.o : class.cpp
	g++ -c class.cpp
fun1.o : fun1.cpp
	g++ -c funkcje.cpp
fun2.o : fun2.cpp
	g++ -c fun2.cpp
program_debug : main.cpp class.cpp fun1.cpp fun2.cpp
	g++ -g -o program main.o class.o fun1.o fun2.o
