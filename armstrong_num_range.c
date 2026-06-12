#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, num, originalNum, remainder, digits, result;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("Armstrong numbers between %d and %d are: \n", lower, upper);
    for (num = lower; num <= upper; num++) {
        originalNum = num;
        digits = 0;
        result = 0;
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
        if (result == num && num != 0) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
