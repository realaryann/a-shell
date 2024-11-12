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
        args = parse_line(line);
        if (status >= 0) {
            exit(status);
        }
    } while(status == -1);
}

/*Function to parse the line into args*/
std::vector<std::string> parse_line(std::string line) {
    std::vector<std::string> res;
    std::string temp="";
    for (char c: line) {
        if (c == ' ') {
            res.push_back(temp);
            temp="";
        } else {
            temp=temp+c;
        }
    }
    if (temp.size() && temp[0] != ' ') {
        res.push_back(temp);
    }
    return res;
}

/*Function to read a line from user input*/
std::string read_line(void) {
    std::string line;
    getline(std::cin, line);
    return line;
}