#include <stdio.h>
int main() {
    int num, factorial = 1,i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");

    }

  for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", num, factorial);

}



