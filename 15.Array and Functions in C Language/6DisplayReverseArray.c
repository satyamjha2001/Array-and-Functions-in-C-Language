#include <stdio.h>
void read_reverse(int a[], int n)
{
    int i;
    for(i=(n-1);i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter a size: ");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    read_reverse(a, n);
    return 0;
}