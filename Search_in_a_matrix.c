#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        scanf("%d",&arr[i][j]);
    }
    int z,c=0;
    scanf("%d",&z);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        if(arr[i][j]==z)
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}