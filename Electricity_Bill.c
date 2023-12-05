#include<stdio.h>
int main()
{
    int u;
    float c,sc;
    scanf("%d",&u);
    if(u<199)
    {
        c=1.20;
    }
    else if(u>=200 && u<400)
    {
        c=1.40;
    }
    else if(u>=400 && u<600)
    {
        c=1.60;
    }
    else if(u>=600 && u<800)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    if((u*c)>400)
    {
        sc=((u*c*0.15));
    }
    else
    {
        sc=0;
    }
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",(u*c));
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f",(u*c)+sc);
}