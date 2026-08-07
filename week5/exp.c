#include <stdio.h>

int main() {
    int a[2][2];
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            printf("Enter number [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}