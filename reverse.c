#include<stdio.h>
int main()
{
	int n,r,digit;
	printf("entre the number");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		r=r*10+digit;
		n=n/10;
		
	}
	printf("reversed number =%d\n",r);
	return 0;
}
