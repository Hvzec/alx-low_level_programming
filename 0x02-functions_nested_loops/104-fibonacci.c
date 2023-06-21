#include <stdio.h>

/**
 * main - Its  printing the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

void printFibonacciNumbers(int count) {
    unsigned int term1 = 1;
    unsigned int term2 = 2;

    printf("%u, %u", term1, term2);

    for (int i = 3; i <= count; i++) {
        unsigned int nextTerm = term1 + term2;
        printf(", %u", nextTerm);

        term1 = term2;
        term2 = nextTerm;
    }
}

int main() {
    printFibonacciNumbers(98);
    printf("\n");

    return (0);
}

