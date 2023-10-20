#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * Prints a hare and not just a hare.
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
