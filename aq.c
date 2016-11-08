#include<stdio.h>
#include<stdlib.h>
int q[100],front=-1,rear=-1;
void ins()
{
	if(rear==99)
		printf("Queue Overflow!\n");
	else
	{
		int x;
		printf("Enter a number: ");
		scanf("%d",&x);
		if(front==-1)
			front++;
		q[++rear]=x;
		printf("%d is inserted.\n",x);
	}
}
void del()
{
	if(front==-1)
		printf("Queue Underflow!\n");
	else
	{
		printf("%d is deleted.\n",q[front]);
		if(front==rear)
			front=rear=-1;
		else front++;
	}
}
void disp()
{
	if(front==-1)
		printf("Queue Underflow!\n");
	else
	{
		int i;
		printf("The queue is: <-");
		for(i=front;i<=rear;i++)
			printf("-%d-",q[i]);
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
