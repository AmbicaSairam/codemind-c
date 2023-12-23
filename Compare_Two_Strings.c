#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],p[20];
    scanf("%[^
]s",s);
    scanf(" %[^
]s",p);
    int k=strcmp(s,p);
    if(k==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}