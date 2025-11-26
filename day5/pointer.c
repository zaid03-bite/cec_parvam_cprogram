#include<stdio.h>
int main(void)
{
int x=10;
int *p;
p=&x;
printf("Value of x=%d\n",x);
printf("Address of x=%p\n",&x);
printf("Value stored in p=%p\n",p);
printf("Value at address p=%d",*p);
return 0;

}