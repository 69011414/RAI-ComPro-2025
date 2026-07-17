#include <stdio.h>

int main()
{
    char Name[100],lastname[100];
    int Age;
    float Height;
    int Weight;
    char university[100];

    printf("Enter your FullName: ");
    scanf("%s %s", Name, lastname);

    printf("Enter your Age: ");
    scanf("%d", &Age);

    printf("Enter your Height: ");
    scanf("%f", &Height);

    printf("Enter your University name : ");
    scanf(" %[^\n]", university);

    printf("\nName: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("Height: %.1f\n", Height);
    printf("University: %s\n", university);
    printf("Hi! Everyone, My name is %c.%s, I am %d years old, my height is %.1f and I am studying in %s\n", lastname[0],Name, Age, Height, university);

    return 0;
}
