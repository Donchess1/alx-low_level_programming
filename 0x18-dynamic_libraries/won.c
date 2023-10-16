#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
    // This will be used to print text
    write(1, "Congratulations, you win the Jackpot!\n", 39);
    exit(EXIT_SUCCESS);
}
