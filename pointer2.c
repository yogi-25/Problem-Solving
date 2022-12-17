#include<stdio.h>
void main()
{
	int arr1[10];
	int i,n,sum=0;
	int *pt;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	pt=arr1;
	for(i=0;i<n;i++)
	{
		sum=sum+*pt;
		pt++;
	}
	printf("%d",sum);
}
