#include <stdio.h>
void unique(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && (i!=j))
            {
                break;
            }
        }
        if (j == n)
            printf("%d", a[i]);
    }
}

int main()
{
    int n, i;
    printf("Enter the size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    unique(a, n);
    return 0;
}