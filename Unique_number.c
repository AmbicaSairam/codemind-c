#include<stdio.h>
int main()
{
    int n,r,h=0,b=0,a=0,c=0,d=0,e=0,f=0,g=0,i=0,j=0,k=0,l=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r==1)
        {
            a++;
        }
        else if(r==2)
        {
            b++;
        }
         else if(r==3)
        {
            d++;
        }
         else if(r==4)
        {
            e++;
        }
         else if(r==5)
        {
            f++;
        }
         else if(r==6)
        {
            g++;
        }
         else if(r==7)
        {
            i++;
        }
         else if(r==8)
        {
            j++;
        }
         else if(r==0)
        {
            k++;
        }
         else if(r==2)
        {
            l++;
        }
        n=n/10;
    }
    if(a>1 || b>1 || d>1 || e>1 || f>1 || g>1 || i>1 || j>1 || k>1 || l>1 )
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}