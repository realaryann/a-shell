
shell: shell_it.o main.o
	g++ -o shell main.o shell_it.o

shell_it.o: shell.hpp
main.o: shell.hpp

clean:
	rm shell *.o