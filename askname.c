#include <stdio.h>
#include <string.h>
void askname(char *first, char *last)
{
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first), "\n"] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    fgets(last, 255, stdin); /* buffer overflow? what's that? */
    last[strcspn(last, "\n")] = '\0'
}