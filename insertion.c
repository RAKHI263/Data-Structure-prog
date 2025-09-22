#include<stdio.h>
int main()
{
	int a[5];
	int i=0;
	while(i<5)
	{
	printf("entre the elements at index  %d :",i);
	scanf("%d",&a[i]);	
	i++;
	}
	printf("\n Array elements are :\n");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
		
}
return 0;	
}
