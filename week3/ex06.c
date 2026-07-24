#include <stdio.h>

int main() {
    int cal, phy, compro;
    char gCal, gPhy, gCom;
    float pCal, pPhy, pCom, gpa;

    printf("Calculus score: ");
    scanf("%d", &cal);

    printf("Physic score: ");
    scanf("%d", &phy);

    printf("Compro score: ");
    scanf("%d", &compro);

    // Calculus
    if (cal >= 80) {
        gCal = 'A'; pCal = 4.0;
    } else if (cal >= 70) {
        gCal = 'B'; pCal = 3.0;
    } else if (cal >= 60) {
        gCal = 'C'; pCal = 2.0;
    } else if (cal >= 50) {
        gCal = 'D'; pCal = 1.0;
    } else {
        gCal = 'F'; pCal = 0.0;
    }

    // Physics
    if (phy >= 80) {
        gPhy = 'A'; pPhy = 4.0;
    } else if (phy >= 70) {
        gPhy = 'B'; pPhy = 3.0;
    } else if (phy >= 60) {
        gPhy = 'C'; pPhy = 2.0;
    } else if (phy >= 50) {
        gPhy = 'D'; pPhy = 1.0;
    } else {
        gPhy = 'F'; pPhy = 0.0;
    }

    // Compro
    if (compro >= 80) {
        gCom = 'A'; pCom = 4.0;
    } else if (compro >= 70) {
        gCom = 'B'; pCom = 3.0;
    } else if (compro >= 60) {
        gCom = 'C'; pCom = 2.0;
    } else if (compro >= 50) {
        gCom = 'D'; pCom = 1.0;
    } else {
        gCom = 'F'; pCom = 0.0;
    }

    gpa = (pCal + pPhy + pCom) / 3.0;

    printf("\nSubject\t\tScore\tGrade\tGrade Point\n");
    printf("-----------------------------------------------\n");
    printf("Cal\t\t%d\t%c\t%.1f\n", cal, gCal, pCal);
    printf("Physics\t\t%d\t%c\t%.1f\n", phy, gPhy, pPhy);
    printf("Compro\t\t%d\t%c\t%.1f\n", compro, gCom, pCom);

    printf("GPA: %.1f\n", gpa);

    return 0;
}