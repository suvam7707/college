#include<stdio.h>
#include<stdlib.h>
int stk[100],top=-1;
void push()
{
	if(top==99)
		printf("Stack Overflow!\n");
	else
	{
		int x;
		printf("Enter a number: ");
		scanf("%d",&x);
		stk[++top]=x;
		printf("%d is pushed.\n",x);
	}
}
void pop()
{
	if(top==-1)
		printf("Stack Underflow!\n");
	else
		printf("%d is popped.\n",stk[top--]);
}
void display()
{
	if(top==-1)
		printf("Stack Underflow!\n");
	else
	{
		int i;
		printf("The stack is: <-");
		for(i=top;i>-1;i--)
			printf("-%d-",stk[i]);
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
