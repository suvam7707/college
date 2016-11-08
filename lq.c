#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int val;
	struct node *next;
}node;
node *front=NULL,*rear=NULL;
void ins()
{
		node *temp=malloc(sizeof(node));
		temp->next=NULL;
		printf("Enter a number: ");
		scanf("%d",&temp->val);
		if(front==NULL)
			front=rear=temp;
		else
		{
			rear->next=temp;
			rear=temp;
		}
		printf("%d is inserted.\n",temp->val);
}
void del()
{
	if(front==NULL)
		printf("Queue Underflow!\n");
	else
	{	
		node *temp=front;
		printf("%d is deleted.\n",front->val);
		if(front==rear)
			front=rear=NULL;
		else front=front->next;
		free(temp);
	}
}
void disp()
{
	if(front==NULL)
		printf("Queue Underflow!\n");
	else
	{
		node *temp=front;
		printf("The queue is: <-");
		while(temp!=NULL)
		{
			printf("-%d-",temp->val);
			temp=temp->next;
		}
		printf("->\n");
	}
}
void main()
{
	int ch1,ch2=0;
	while(ch2==0)
	{
		system("cls");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter choice: ");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:	ins();
					getch();
					break;
			case 2:	del();
					getch();
					break;
			case 3:	disp();
					getch();
					break;
			case 4:	printf("Thank you for using the program.\n");
					ch2=1;
					break;
			default:printf("Wrong choice!\n");
					getch();
		}
	}
}
