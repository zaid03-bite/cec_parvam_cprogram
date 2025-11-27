#include<stdio.h>
int main()
{
    char name[3][20]={
        "bharath",
        "bhargab",
        "harsha harsha harsha"
    };
    int i;
    printf("List of names:\n");
    for(i=0;i<3;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}