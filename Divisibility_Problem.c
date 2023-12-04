#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d%d",&a,&b);
    k=a%b;
    if(k==0)
    {
        printf("%d",k);
        }
    else 
    {
        printf("%d",b-k);
    }
    
}