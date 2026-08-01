#include <stdio.h>

int main(void) {
    int n = 10;
    int num;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum += num;
    }

    double average = (double)sum / n;

    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", average);

    return 0;
}