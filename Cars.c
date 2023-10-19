#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
    {
        printf("%d",x);
    }
    else if(x%4==0)
    {
       printf("%d",x/4);
    }
    else 
    {
        printf("%d",(x/4)+1);
    }
}