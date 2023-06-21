#include <stdio.h>
/**
 * main -  Its finding and printing the sum of the even-valued terms.
 * Return: Always 0.
 */
int main() {
    int term1 = 1;
    int term2 = 2;
    int nextTerm = 0;
    int sum = 2;  // Start with 2 : first even-valued term

    while (nextTerm <= 4000000) {
        nextTerm = term1 + term2;

        if (nextTerm % 2 == 0) {
            sum += nextTerm;

            // Printing each digit of the even term
            int temp = nextTerm;
            int digitCount = 0;

            // Counting the numbers of digits
            while (temp > 0) {
                temp /= 10;
                digitCount++;
            }

            // Converting and printing each digit
            temp = nextTerm;
            for (int i = digitCount - 1; i >= 0; i--) {
                int divisor = 1;
                for (int j = 0; j < i; j++) {
                    divisor *= 10;
                }
                int digit = temp / divisor;
                putchar('0' + digit);
                temp %= divisor;
            }
            putchar(' ');
        }

        term1 = term2;
        term2 = nextTerm;
    }

    putchar('\n');

    // Printing the sum
    int temp = sum;
    int digitCount = 0;

    // Counting the number of digits
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    // Converting and printing each digit
    temp = sum;
    for (int i = digitCount - 1; i >= 0; i--) {
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        int digit = temp / divisor;
        putchar('0' + digit);
        temp %= divisor;
    }
    putchar('\n');

    return (0);
}
