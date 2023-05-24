#include<stdio.h>
#include<limits.h>
int min(int a[],int n)
{
    int i,m=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(m>=a[i])
        {
            m=a[i];
        }
    }
    return m;
}
int main() {
int n,i;
printf("Enter size of array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of your array: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Smallest element in the array is %d",min(a,n));
return 0;
}