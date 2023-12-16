#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int arr[x][y],i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);   
        }
    }
    int sum=0;
    for(i=0;i<x;i++)
    {
    	sum=0;
        for(j=0;j<y;j++)
        {
         
		     
			sum=sum+arr[i][j]; 
        }
        printf("%d",sum);
        printf(" ");
    }
}