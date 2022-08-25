
#ifndef __READLINE_H__
#define __READLINE_H__

/**
 * Reads a line from stdin and it finish when user press Enter key
 * (or read end of carriage char). Also returns the amount of characters
 * read into chars variable.
 * returns char* a pointer to the read string.
 */
char* readLine(int *chars);

#endif
