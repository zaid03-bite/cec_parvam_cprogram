#include<stdio.h>
int main()
{
    int value=10;
    int *p=&value;
    int **pp=&p;
    printf("value=%d\n",value);
    printf("*p=%d\n",*p);
    printf("**pp=%d\n",**pp);
    **pp=99;
    printf("Update value = %d\n",value);
    return 0;

}