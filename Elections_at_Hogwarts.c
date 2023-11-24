#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>50 && x>y && x>z)
    {
        printf("Gryffindor");
    }
    else if(y>50 && y>x && y>z)
    {
        printf("Slytherin");
    }
    else if(z>50 && z>y && z>x)
    {
        printf("Hufflepuff");
    }
    else 
    {
        printf("NOTA");
    }
}