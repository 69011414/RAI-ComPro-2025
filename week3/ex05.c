#include <stdio.h>

int main() {
    float h, r, volume;
    const float PI = 3.14159;

    printf("Enter cone hight: ");
    scanf("%f", &h);

    printf("Enter cone base radius: ");
    scanf("%f", &r);

    volume = (PI * r * r * h) / 3.0;

    printf("Cone volume = %.1f\n", volume);

    if (volume >= 100)
        printf("This cone is perfect for Supun project\n");
    else
        printf("This cone is not fit for this project\n");

    return 0;
}