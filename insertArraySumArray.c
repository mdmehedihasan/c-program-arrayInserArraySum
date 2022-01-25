#include <stdio.h>
int main()
{
    int array[5];
    printf("Insert the value in array:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The values are:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
        printf(" ");
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }

    printf("\n The total sum of the array is :%d", sum);
    return 0;
}