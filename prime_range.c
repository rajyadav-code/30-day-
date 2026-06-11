#include <stdio.h>
#include <stdbool.h>

void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start = 10;
    int end = 50;

    printPrimesInRange(start, end);

    return 0;
}
