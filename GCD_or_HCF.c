#include<stdio.h>
int main()
{
    int i,x,y,m;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
       m=(x*i);
       if(m%y==0)
       {
           printf("%d",(x*y)/m);
           break;
       }
    }
}
