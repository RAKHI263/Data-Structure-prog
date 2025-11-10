#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
struct Node* head = NULL;
void insertAtBeginning(int value)   

{
	struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data =value;
	
	if(head == NULL)
	{
		newNode->next =NULL;
		 head = newNode;
	} else
	{
		newNode->next =head;
		head = newNode;
	}
	
	printf("node with insert %d \n",value);
    } 
	void displaylist()
	{
		struct Node* temp=head;
		printf("link list:");
		while(temp != NULL)
		{
			printf("%d ->",temp->data);
			temp =temp-> next;
		}
		printf("NULL\n");
	}
	int main()
	{
		insertAtBeginning(10);
		insertAtBeginning(20);
		insertAtBeginning(30);
		
		displaylist();
		return 0;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 





