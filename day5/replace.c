#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50};
    int pos=1;
    int newValue=99;
    arr[pos]=newValue;
    printf("Array after update:\n");
    for (int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}