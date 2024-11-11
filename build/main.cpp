#include "shell.hpp"

int main(int argc, char* argv[]) {
    if (isatty(STDIN_FILENO)==1) {
        shell_it();
    } else {
        return -1;
        //shell_no_it();
    }
    return 0;
}