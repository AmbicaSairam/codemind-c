#include<stdio.h>
int main()
{
    int r,n,ecount=0,ocount=0,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
        n=n/10;
        count++;
        
    }
    if(ecount==count)
    {
        printf("Even");
    }
    else if(ocount==count)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}