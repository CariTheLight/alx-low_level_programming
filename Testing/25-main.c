#include <stdio.h>

/**
 * modif_my_char_var - set the char to o
 *
 * Return: nothing
 */

void modif_my_char_var(char *cc, char ccc)
{
        printf("Value of 'cc'; %c\n", cc);
        printf("Address of 'cc': %p\n", &cc);
        printf("Value of 'ccc'; %c\n", ccc);
        printf("Address of 'ccc': %p\n", &ccc);

        *cc = 'o';
        ccc = 'l';
}
