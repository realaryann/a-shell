#ifndef SHELL_H
#define SHELL_H

/*Include Directives*/
#include <iostream>
#include <unistd.h>
#include <vector>
#include <string>

/*Function Declarations*/
extern void shell_it(void);
extern std::string read_line(void);
extern void shell_no_it(void);

#endif