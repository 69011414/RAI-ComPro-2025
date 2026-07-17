#include <stdio.h>

int main()
{
    char Name[100];
    int Age;
    float Height;
    int Weight;
    char Gender;
    char EducationQualification[50];

    printf("Enter your Name: ");
    scanf(" %[^\n]", Name);

    printf("Enter your Age: ");
    scanf("%d", &Age);

    printf("Enter your Height: ");
    scanf("%f", &Height);

    printf("Enter your Weight: ");
    scanf("%d", &Weight);

    printf("Enter your Gender: ");
    scanf(" %c", &Gender);

    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]",EducationQualification);

    printf("\nName: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("Gender: %c\n", Gender);
    printf("Height: %.1f\n", Height);
    printf("Weight: %d\n", Weight);
    printf("Education: %s\n", EducationQualification);

    return 0;
}
