#include <stdio.h>
#include <stdlib.h>
#define  Q_SIZE 10

struct Queue{
	int data[Q_SIZE];
	int front,rear;
};

typedef struct Queue Q;


void EnQueue(Q *q)
{
	if(q->rear==Q_SIZE-1)
		printf("Queue is full\n");
	else
	{
		int x;
		printf("Enter element to insert\n");
		scanf("%d",&x);
		q->rear++;
		q->data[q->rear]=x;
	}
}

void DQueue(Q *q)
{
	if(q->rear < q->front)
		printf("Queue is empty\n");
	else
	{
		int x=q->data[q->front];
		q->front++;
		printf("deleted element is %d\n",x); 
	}
}

void display(Q q)
{
	int i;
	for(i=q.front;i<=q.rear;i++)
		printf("%d\n",q.data[i]);
}


int main()
{
	Q q;
	q.front=0;
	q.rear=-1;

	int ch,w=1;
	while(w)
	{
		printf("1.insert\n2.delete\n3.display\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				EnQueue(&q);
				break;
			case 2:
				DQueue(&q);
				break;
			case 3:
				display(q);
				break;
			case 4:
				w=0;
				break;
		}
	}


}