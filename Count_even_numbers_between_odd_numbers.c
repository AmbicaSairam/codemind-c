#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1 && arr[i+1]%2==0 && arr[i+2]%2==1)
        {
            c++;
        }
    }
    printf("%d",c);
}