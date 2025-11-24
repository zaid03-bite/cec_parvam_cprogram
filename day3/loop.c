#include <stdio.h>
int main()
{
    //there are three types of loop in c
    //for loop
    //while loop
    //do while

    //1.for loop
    //syntax
    //for (initilization;condition;incriment or decriment)
    //for loop
    printf("for loop\n");
    for(int i=1;i<=10;i++){
    printf("%d\n",i);
    }
    //while loop
    printf("while loop\n");
    int num=1;
    while(num<=10){
        printf("%d\n",num);
        num++;
    }
    //do while loop
    printf("do while\n");
      int num1=1;
    do{
        printf("%d\n",num1);
        num++;
    }while(num<=5);
    return 0;

}

