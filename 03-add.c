/**
 * This program adds up the contents of an array.
 *
 * (1) Explain what's wrong with this code:
 *
 * Nums is passed as a pointer in add() and thus, the size would be only 1 as it only reads int he first element. Thus, by counting the size in the main, the size will remain true.
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int add(int arr[], int size)
{
    int i;
    int total = 0;
    for (i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

int main(void)
{
    int nums[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    int size = sizeof(nums)/sizeof(int);
    int result = add(nums, size);
    printf("Result: %d\n", result);

    return 0;
}
