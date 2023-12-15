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
       if(arr[(n-1)-i]%2==1)
       {
           printf("%d",arr[(n-1)-i]);
           break;
       }
    }
  
}

