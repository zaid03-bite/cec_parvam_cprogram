#include<stdio.h>
int main()
{
    printf("Enter a number:");
    int n=5;
    int a=0,b=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d\n ",a);
        int c=a+b;
        b=a;
        a=c;
    }
}