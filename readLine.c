
#include <stdio.h>
#include <stdlib.h>

//#include <readLine.h>

/**
 * Reads a line from stdin and it finish when user press Enter key
 * (or read end of carriage char). Also returns the amount of characters
 * read into chars variable.
 * returns char* a pointer to the read string.
 */
char * readLine(int *chars)
{
    int count = 0;
    char *line = NULL;

    line = (char *)malloc(sizeof(char)*(count + 1));
    while ((line[count] = getchar()) != 0x0A) {
        count++;
        line = (char *)realloc(line, (sizeof(char)*(count + 1)));
    }
    *chars = count;
    line[count] = '\0';

    return line;
}
