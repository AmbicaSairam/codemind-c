#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            k=1;
        }
        else
        {
            k=0;
        }
        for(j=1;j<=n;j++)
        {
            printf("%d ",k);
        }
        printf("
");
        
    }
}