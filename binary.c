#include<stdio.h>
int main()
{
	int low=0,high=4,i,f=0,num,mid;
	int a[5]={10,20,30,40,50};
	printf("entre number to find in elements in a array: ");
	scanf("%d",&num);
	while(low<=high)
	{
		mid =(low+high)/2;
		if(a[mid]==num){
			f=1;
			break;
		}
		else if(a[mid]>num)
		{
			high=mid -1;
			
		}
		else{
			low= mid +1;
			
		}
	}
	if(f==1)
	{
		printf("%d is found at %d position",num,mid+1);
	}
	else{
		printf("%d is not found ",num);
	}
	return 0;
}
