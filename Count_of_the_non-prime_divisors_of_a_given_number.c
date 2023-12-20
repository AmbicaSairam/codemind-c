#include<stdio.h>
int main()
{
    int n,c=0,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(int j=1;j<n;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                k++;
            }
        }
    }
    printf("%d",k);
}