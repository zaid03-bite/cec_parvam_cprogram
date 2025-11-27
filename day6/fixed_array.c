#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int value)
{
    if(rear==MAX-1)
    {
        printf("Queue Full\n");
    }
    else
    {
        if(front==-1)
        front=0;
    queue[++rear]=value;
    printf("%d enqueued\n",value);
    }
}    
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("%d dequeue\n",queue[front++]);
    }
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d",queue[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;

}