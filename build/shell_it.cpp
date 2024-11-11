#include "shell.hpp"

/*UNIX Shell running in an interactive environment*/
void shell_it(void) {
    /*line: inputed line to the shell, ready to be tokenized*/
    std::string line;
    /*args: tokenized line*/
    std::vector<std::string> args;
    int status = -1;
    do {
        std::cout<<"ash_prompt$ ";
        line = read_line();
        std::cout<<line;
        if (status >= 0) {
            exit(status);
        }
    } while(status == -1);
}

/*Function to read a line from user input*/
std::string read_line(void) {
    std::string line;
    getline(std::cin, line);
    return line;
}