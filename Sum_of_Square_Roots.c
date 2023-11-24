#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float k;
    float sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        k=sqrt(i);
        sum=sum+k;
    }
    printf("%.2f",sum);
}