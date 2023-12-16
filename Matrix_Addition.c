#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int ar1[x][y],i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&ar1[i][j]);   
        }
    }
    int a,b;
    scanf("%d%d",&a,&b);
    int ar2[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar2[i][j]);   
        }
    }
    int ar3[i][j];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            ar3[i][j]=ar1[i][j]+ar2[i][j];  
        }
    
    }
     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",ar3[i][j]);
        }
        printf("
");
    
    }
    
}