#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    printf("%d",(h/m)+(h%m));
}