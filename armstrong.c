#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int remainder, digits = 0, result = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += round(pow(remainder, digits));
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
