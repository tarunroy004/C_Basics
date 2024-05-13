#include <stdio.h>
extern void _exit(register int);
int _start() {
   printf("Program without main");
    _exit(0);
}