#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int z,c=0;
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
             c++;
        }
       
    }
     if(c>=1)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
   
}

