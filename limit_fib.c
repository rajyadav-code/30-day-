#include <stdio.h>

int main() {
    unsigned long long lower, upper;
    unsigned long long first = 0, second = 1, next = 0;
    printf("Enter lower limit: ");
    scanf("%llu", &lower);
    printf("Enter upper limit: ");
    scanf("%llu", &upper);
    printf("Fibonacci numbers between %llu and %llu: ", lower, upper);
    while (next <= upper) {
        if (next >= lower) {
            printf("%llu ", next);
        }
        first = second;
        second = next;
        next = first + second;
        if (second == 0 && next == 0) {
            next = 1;
        }
    }

    printf("\n");
    return 0;
}