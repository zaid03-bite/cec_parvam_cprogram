#include<stdio.h>
struct Student
{
   char name[20];
   float marks;
};
int main(void)
{
    struct Student s[3]={
        {"mohan",80.78},
        {"bharath",90.99},
        {"harsha",100.0}};
        printf("Student with marks >80:\n");
        for(int i=0;i<3;i++)
        {
            if (s[i].marks>80.0)
            {
                printf("%s->%.2f\n",s[i].name,s[i].marks);
            }
        }
        return 0;
    
}