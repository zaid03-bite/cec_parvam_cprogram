#include<stdio.h>
int main()
{
    int marks[5]={78,95,60,88,72};
    int i;
    int max=marks[0];
    int min=marks[0];
    int searchValue=88;
    int foundindex=-1;
    printf("Array elements (Traversing):\n");
    for(int i=0;i<5;i++)
    {
        printf("marks[%d]=%d\n",i,marks[i]);
    }
    for(int i=1;i<5;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
        if (marks[i]<min)
        {
            min=marks[i];
        }
    }
    printf("\nMaximum marks=%d\n",max);
    printf("\nMinimum marks=%d\n",min);
    for(int i=0;i<5;i++)
    {
        if(marks[i]==searchValue)
        {
            foundindex=i;
            break;
        }
    }
    if (foundindex !=-1)
    {
        printf("\nValue %d found at index %d\n",searchValue,foundindex);
    }
    else 
    {
        printf("\nValue %d not found in array\n",searchValue);
    }
    return 0;
}