/**
 * Well, this one just segfaults after a bit.
 *
 * (1) Explain what's wrong with this code:
 *
 * Array stuff[100] only has a size of 100 and thus, having a for loop to parameter 10000 will not work
 *
 * (2) Fix the problem.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int stuff[100] = { 0 };

    /* Can you guess what the following does without running the program? */
    14[stuff + 1] = 12;

    int i;
    for (i = 0; i < 100; ++i) {
        printf("%d: %d\n", i, stuff[i]);
    }

    return 0;
}

