#include <stdio.h>

int main() {
    int number[8];
    int i;
    int smallest, largest;

    for (i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    
    smallest = number[0];
    largest = number[0];

    for (i = 1; i < 8; i++) {
        if (number[i] < smallest) {
            smallest = number[i];
        }

        if (number[i] > largest) {
            largest = number[i];
        }
    }

    
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}