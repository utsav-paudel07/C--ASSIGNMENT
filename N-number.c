#include <stdio.h>
int main()

{
	int i,sum=0,n;
	printf("enter the value of n:\n ");
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++)
	{
	printf("enter the numbers:\n");
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	
	printf("the sum is %d\n",sum);

    return 0;
	}
    