#include <stdio.h>

int main()
{
    int a;
    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &a);

    int b[a];
    printf("Enter %d integers: ", a);
    for (int i = 0; i < a; i++)scanf("%d", &b[i]);

    printf("Output:\n");
    for (int i = 0; i < a; i++)
    {
        int c = 0;
        for (int j = 0; j < a; j++)
        {
            if (b[i] == b[j]) c++;
        }

        int d = 0;
        for (int k = 0; k < i; k++)
        {
            if (b[k] == b[i])
            {
                d = 1;
                break;
            }
        }

        if (!d) printf("Element %d occurs %d times\n", b[i], c);
    }

    return 0;
}