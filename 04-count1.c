/**
 * This program seems to print out different totals for the values in 'nums'
 * ...occasionally?
 *
 * (1) Explain what's wrong with this code:
 *
 * Firstly, neither nums[1000] nor total is initialized and thus possess garbage value
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int main(void)
{
    int nums[1000];
    int total = 0;

    for(int i = 0; i < 1000; i++){
      nums[i] = i;
      total += nums[i];
    }

    printf("The total is: %d\n", total);

    return 0;
}

