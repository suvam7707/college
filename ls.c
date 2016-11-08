#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int val;
	struct node *next;
}node;
node *top=NULL;
void push()
{
		int x;
		printf("Enter a number: ");
		scanf("%d",&x);
		node *temp=malloc(sizeof(node));
		temp->val=x;
		temp->next=top;
		top=temp;
		printf("%d is pushed.\n",x);
}
void pop()
{
	if(top==NULL)
		printf("Stack Underflow!\n");
	else
	{
		node *temp=top;
		top=top->next;
		printf("%d is popped.\n",temp->val);
		free(temp);
	}
}
void display()
{
	if(top==NULL)
		printf("Stack Underflow!\n");
	else
	{
		node *temp=top;
		printf("The stack is: <-");
		while(temp!=NULL)
		{
			printf("-%d-",temp->val);
			temp=temp->next;
		}
		printf("->\n");
	}
}
int main()
{
	int ch1,ch2=0;
	while(ch2==0)
	{
		system("cls");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter choice: ");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:	push();
					getch();
					break;
			case 2:	pop();
					getch();
					break;
			case 3:	display();
					getch();
					break;
			case 4:	printf("Thank you for using the program.\n");
					ch2=1;
					break;
			default:printf("Wrong choice!\n");
					getch();
		}
	}
	return 0;
}
