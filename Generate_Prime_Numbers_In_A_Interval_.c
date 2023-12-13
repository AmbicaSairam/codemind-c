#include<stdio.h>
int main()
{
    int x,y,i,j,c=0;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}