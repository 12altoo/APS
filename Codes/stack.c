#include<stdio.h>
#include<stdlib.h>
#define S_SIZE 10

struct Stack{
	int data[S_SIZE];
	int top;
};
typedef struct Stack stack;



void push(stack *s)
{

	if(s->top==S_SIZE-1)
		printf("Stack overflow\n");
	else
	{
		int x;
		printf("ENter data to push\n");
		scanf("%d",&x);
		s->top++;

		s->data[s->top]=x;
	}
}

void pop(stack *s)
{
	if(s->top==-1)
		printf("stack underflow\n");
	else
	{
		int x=s->data[s->top];
		s->top--;
		printf("poped element is %d\n",x);
	}
}

int main()
{
	stack s;
	s.top=-1;
	int ch,i,w=1;

	while(w)
	{
		printf("1.push\n2.push\n3.diplay\n4.exit\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				push(&s);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				for(i=0;i<=s.top;i++)
					printf("%d\n",s.data[i]);
					break;
			case 4:
				w=0;
				break;

		}		

	}

	return 0;
}