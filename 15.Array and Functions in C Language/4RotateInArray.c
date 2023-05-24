#include<stdio.h>
void reverse(int a[],int low,int high)
{   int temp;
    while(low<high)
    {  temp=a[low];
       a[low]=a[high];
       a[high]=temp;
       low++;
       high--;
    }

}
void rotate(int a[],int n)
{   int r,d;
    printf("Enter the rotation number: ");
    scanf("%d",&r);
     printf("Enter 1 for \"left\" or 2 for \"right\": ");
     scanf("%d",&d);
     if(d==1)
     {
        reverse(a,0,(r-1));
        reverse(a,r,(n-1));
        reverse(a,0,(n-1));
     }
    else if(d==2)
    {
        reverse(a,0,r);
        reverse(a,(r+1),(n-1));
        reverse(a,0,(n-1));
    }
}
int main() {
    int n,i,r;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rotate(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

return 0;
}