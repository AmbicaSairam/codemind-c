#include<stdio.h>
int main()
{
    int k,n,r,sum=0;
    scanf("%d",&n);
    k=n*n;
    while(k!=0)
    {
        r=k%10;
        k=k/10;
        sum=sum+r;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}