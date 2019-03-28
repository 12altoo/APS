#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

typedef struct Node node;

node * insert_front(node *head)
{
	node *newnode,*i;
	int d;
	newnode=(node *)malloc(sizeof(node));
	if(newnode==NULL)
	{
		printf("new node not created\n");
		return head;

	}
	printf("Enter data\n");
	scanf("%d",&d);
	newnode->data=d;
	newnode->next=NULL;
	if(head==NULL)
		return newnode;
	else
	{
		newnode->next=head;
		return newnode;
	}
}


node * delete_node(node * head)
{
	node * d;
	if(head->next==NULL)
	{
		printf("deleted element %d\n",head->data);
		free(head);
		return NULL;
	}
	d=head;
	head=head->next;
	printf("deleted node ; %d\n",d->data);
	return head; 

}

node * insert_end(node *head)
{
	node *newnode,*i;
	int d;
	newnode=(node *)malloc(sizeof(node));
	if(newnode==NULL)
	{
		printf("new node not created\n");
		return head;

	}
	printf("Enter data\n");
	scanf("%d",&d);
	newnode->data=d;
	newnode->next=NULL;
	if(head==NULL)
		return newnode;
	else
	{
		for(i=head;i->next!=NULL;i=i->next);
		i->next=newnode;

		return head;
	}

}

node * delete_end(node *head)
{

	node *cur=head,*prev=NULL;
	if(head->next==NULL)
	{
		printf("deleted element %d\n",cur->data);
		free(head);
		return NULL;

	}
	for(cur=head;cur->next!=NULL;prev=cur,cur=cur->next);
	prev->next=NULL;
	printf("deleted element %d\n",cur->data);
	free(cur);

	return head;

}


int main()
{
	node *head=NULL,*temp;

	int w=1,ch;

	while(w)
	{
		printf("1.insert_front\n2.insert_end\n3.deleted_start\n4.delete_end\n5.display\n6.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				head=insert_front(head);
				break;
			case 2:
				head=insert_end(head);
				break;
			case 3:
				if(head==NULL)
					printf("No node\n");
				else
					head=delete_node(head);
				break;
			case 4:
				if(head==NULL)
					printf("No node\n");
				else
					head=delete_end(head);
				break;
			case 5:
				if(head==NULL)
					printf("No node\n");
				else
				{
					for(temp=head;temp!=NULL;temp=temp->next)
						printf("%d\n",temp->data );
				}
				break;

			case 6:
				w=0;

		}
	}


}