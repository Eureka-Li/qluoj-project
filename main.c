#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cards[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cards[i]);
    }

    long long sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumA += cards[i];
        }
        else
        {
            sumB += cards[i];
        }
    }

    if (sumA > sumB)
    {
        printf("Greater than\n");
    }
    else if (sumA < sumB)
    {
        printf("Less than\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}