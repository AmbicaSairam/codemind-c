#include<stdio.h>
int main()
{
    int n,i,k,c=0,sum=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    k=sum/n;
    for(i=0;i<n;i++)
    {
    if(k==arr[i])
    
   c++;
    }
    if(c>=1)
    {
        printf("True");
    }
    else
    printf("False");
}

