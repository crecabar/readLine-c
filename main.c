
#include <stdio.h>
#include <readLine.h>

int main(int nArgs, char *vArgs[])
{
    char *line = NULL;
    int chars;
    printf("Write anything, finish by presing enter:\n");
    line = readLine(&chars);

    printf("%d chars were read.\nLine was:\n%s\n", chars, line);

    return 0;
}
