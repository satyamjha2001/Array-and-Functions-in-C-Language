#include<stdio.h>
void sort(int a[],int n)
{  int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main() {
int n;
printf("Enter the size: ");
scanf("%d",&n);
int a[n],i;
printf("Enter the values: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,n);
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}