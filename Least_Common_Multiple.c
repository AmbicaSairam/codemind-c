#include<stdio.h>
int main()
{
    int x,y,m,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        m=(x*i);
        if(m%y==0)
        {
           printf("%d",m);
            break;
        }
    }
}