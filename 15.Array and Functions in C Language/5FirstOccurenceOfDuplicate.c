#include <stdio.h>
int duplicate(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
    {

            if (a[i] == a[i+1])
                return a[i];
    }
    if(i==n)
    printf("no adjacent duplicates is found");
    return 0;
}
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter the number of elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }   if(duplicate(n,a))
        printf("duplicate is %d", duplicate(n, a));
    return 0;
}