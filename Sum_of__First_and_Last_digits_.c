#include<stdio.h>
int main()
{
    int r1,r2,n,k=0;
    scanf("%d",&n);
    r1=n%10;
    n=n/10;
    while(n!=0)
    {
        r2=n%10;
        n=n/10;
    }
    printf("%d",r1+r2);
}