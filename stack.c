#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4
int value;
int Stack[MAX_SIZE];
int tos=-1;
void push()
{
	if(tos == MAX_SIZE-1)
	{
		printf("Overflow stack!cannot push %d\n");
	}
	else
		tos++;
		Stack[tos]=value;
	{
		printf("%d pushed into stack\n",value);
	
		}
	
}
void pop()
{
	if(tos==-1)
	{
		printf("Stack is underflow");
	}
	else
	{
	printf("%d is poped",Stack[tos]);	
	}
	tos--;
}
void peek(){
	if(tos==-1)
	{
		printf("Stack is empty");
	}
	else
	{
	printf("Top element is: %d\n", Stack[tos]);	
	}
}
void display() {
	int i;
	if(tos==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("elements on stack:");
		
		for(i=tos;i>=0;i--)
		{
		printf("%d",Stack[i]);	
		}print("\n");
	}
}
int main()
{
	int choice;
	while(1){
		printf("\n  Stack operation   \n");
		printf("1. push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("5. exit\n");
		
		printf("enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
		
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
			case 5 : printf("exit the program.\n");
			        exit(0);
		  default:
				printf("invalid ");
		}
		return 0;
	}
}
