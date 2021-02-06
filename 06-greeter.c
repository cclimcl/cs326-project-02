/**
 * This program collects some information from the user, but it doesn't quite
 * work correctly.
 *
 * (1) Explain what's wrong with this code:
 *
 * It is unneccessary to make age a pointer.
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int main(void)
{
    char* name;
    int age;
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Hello, %s!\n", name);
    printf("You are %d years old, huh? Wow!\n", age);

    return 0;
}