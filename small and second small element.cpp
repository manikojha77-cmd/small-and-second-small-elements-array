#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter  the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int small=a[0],second_small=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		{
		second_small=small;
		small=a[i];
		}
		else if(second_small >a[i]&&a[i]!=small)
		{
			second_small = a[i];
		}
	}
	printf("The smalest element is=%d\n",small);
	printf("The second smalest elements is=%d",second_small);
	return 0;
}
