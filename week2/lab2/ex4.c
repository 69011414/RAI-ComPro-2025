#include <stdio.h>

int main()
{
    char Name[1];
    int studentid;
    float programming;
    float physic;
    float cal;

    printf("Enter your Name: ");
    scanf("%c", Name);
    printf("Enter your student ID: ");
    scanf("%d", &studentid);
    printf("Enter your Programming score: ");
    scanf("%f", &programming);

    printf("Enter your Physics score: ");
    scanf("%f", &physic);
    printf("Enter your Calculus score: ");
    scanf("%f", &cal);
    printf("M%s Your GPA is %0.2f",&studentid,(programming+physic+cal)/3);
    return 0;
}