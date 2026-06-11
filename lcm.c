#include <stdio.h>

// Function to calculate GCD using Euclidean Algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Function to calculate LCM
int find_lcm(int a, int b) {
    // Divided first to prevent potential integer overflow from (a * b)
    return (a / find_gcd(a, b)) * b;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = find_lcm(num1, num2);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
