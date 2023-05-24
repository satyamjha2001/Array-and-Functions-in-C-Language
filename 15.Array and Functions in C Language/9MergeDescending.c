#include<stdio.h>
void mergeDescending(int a[],int b[],int n,int m)
{
    int i=0,j=0,x=(n+m),s;
    int c[x];
  for(s=0;s<10;s++)
    {
        if(j==m)
        {
            while(s!=10)
            {
                c[s]=a[i];
                a++;
                s++;
            }
        }
        if(i==5)
        {
            while(s!=10)
            {
                c[s]=b[j];
                b++;
                s++;

            }
            if(s==10)
            {
                break;
            }
        }

        if(a[i]>b[j])
        {
            c[s]=a[i];
            i++;
        }
        else
        {
            c[s]=b[j];
            j++;
        }

    }
    for(i=0;i<x;i++)
    {

        printf("%d ",c[i]);
    }
}
int main() {
int n, m,i;
printf("Enter the size of first array: ");
scanf("%d",&n);
printf("Enter the size of second array: ");
scanf("%d",&m);
int a[n],b[m];
printf("Enter %d numbers in descending order: ",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter %d numbers in descending order: ",m);
for(i=0;i<m;i++)
{
    scanf("%d",&b[i]);
}
mergeDescending(a,b,n,m);
return 0;
}