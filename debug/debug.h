#ifndef DEBUG_DEBUG_H
#define DEBUG_DEBUG_H

#include "../types.h"

int exec(   int pid, 
            ptr program,
            unsigned int program_size);

int breakpoint( int pid, 
                ptr addr,
                int (*callback)(void*));

#endif
