#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int c=0,sum=0;
     for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           
           sum=sum+arr[i];
       }
       else
       {
           c=c+arr[i];
       }
    }
    if(c>sum)
    {
        printf("%d",c-sum);
    }
    else
    {
        printf("%d",sum-c);
    }
    
    
}