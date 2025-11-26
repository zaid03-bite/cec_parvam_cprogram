#include<stdio.h>
struct student
{
    int age;
    float marks;

};
int main()
{
    int intvar=10;
    float floatvar=5.5;
    char charvar='A';
    struct student s1={20,85.5};
    int *pint=&intvar;
    float *pfloat=&floatvar;
    char *pchar=&charvar;
    struct student *pstudent=&s1;
    printf("Integer via pointer =%d\n",*pint);
    printf("Float via pointer =%.1f\n",*pfloat);
    printf("Char via pointer =%c\n",*pchar);
    printf("Student age via pointer =%d\n",pstudent->age);
    printf("Student marks via pointer =%.1f\n",pstudent->marks);
    return 0;
}
