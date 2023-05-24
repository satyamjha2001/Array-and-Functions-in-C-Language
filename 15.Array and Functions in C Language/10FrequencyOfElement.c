#include<stdio.h>
void frequency(int n);
int main()
{
    int size;
    printf("enter size of an array: ");
    scanf("%d",&size);
    printf("enter %d values array: ",size);
    frequency(size);
    return 0;
}
void frequency(int n)
{
    int freq[100]={0};
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<=99;i++)
    {
        if(freq[i]>0)
        {
            printf("%d is %d times\n",i,freq[i]);
        }
    }

}