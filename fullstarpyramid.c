#include<stdio.h>
int main()
{
	int n,space,i,j,k;
	printf("Enter the Height:");
	scanf("%d",&n);
	space=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<space-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("*");
		}
		space--;
		printf("\n");
	}
	
}
