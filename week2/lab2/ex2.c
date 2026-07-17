#include <stdio.h>

int main() {
    int a;
    int hour;
    int minute;
    printf("Enter total minutes: ");
    scanf("%d", &a);

    hour = a / 60;
    minute = a % 60;
    printf("%d minutes is %d hour(s) and %d minute(s)\n", a, hour, minute);

    

    return 0;
}
