#include <stdio.h>
void countDuplicate(int a[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("duplicates number = %d", count);
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
    countDuplicate(a, n);
    return 0;
}