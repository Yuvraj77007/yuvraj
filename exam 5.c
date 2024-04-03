#include <stdio.h>
 swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
int num1, num2;

    printf("num1: ");
     scanf("%d", &num1);

    printf("num2: ");
    scanf("%d", &num2);
    
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);

    printf("swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);


}

