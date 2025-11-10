#include<stdio.h>
#define SIZE 5
void enqueue (int queue [],int *front,int *rear,int item)
{
	if (*rear == SIZE-1)
	{
		printf("queue is full ! Insertion not possible.\n");
		return ;
	}
	if(*front == -1){
		*front =0;
		
	}
	 *rear =*rear +1;
	 queue[*rear]=item;
	 
	 printf("%d inserted into the queue \n",item);
	 
	 }
	 int main()
	 {
	 	int i;
	 	int queue[SIZE];
	 	int front=-1,rear=-1;
	 	
	 	enqueue(queue,&front,&rear,10);
	 	enqueue(queue,&front,&rear,20);
	 	enqueue(queue,&front,&rear,30);
	 	enqueue(queue,&front,&rear,40);
	 	enqueue(queue,&front,&rear,50);
	 	enqueue(queue,&front,&rear,60);
	 	
	 	printf(" \ncurrent queue :\n");
	 	if(front==-1)
	 	printf("queue is empty.\n");
	 	else{
	 		for(i=front; i<=rear; i++){
	 			printf("%d",queue[i]);
			 }
			 printf("\n");
		 }
		 return 0;
		 
	 	
	 }
	
	
	



