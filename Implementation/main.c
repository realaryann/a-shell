#include "../Headers/shell.h"


int main(int argc, char* argv[]) {
    if (isatty(STDIN_FILENO)==1) {
        shell_it();
    } else {
        shell_no_it();
    }
    return 0;
}