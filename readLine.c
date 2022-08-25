
#include <stdio.h>
#include <stdlib.h>

//#include <readLine.h>

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
