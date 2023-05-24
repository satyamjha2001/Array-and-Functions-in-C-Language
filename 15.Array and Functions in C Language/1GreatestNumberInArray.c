#include<stdio.h>
#include<limits.h>
int max(int a[],int n)
{
    int i,m=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(m<=a[i])
        {
            m=a[i];
        }
    }
    return m;
}
int main() {
int n,i;
printf("Enter the size of array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of your array: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Greatest element in the array is %d",max(a,n));
return 0;
}