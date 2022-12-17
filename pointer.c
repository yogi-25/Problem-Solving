#include<stdio.h>
#include<conio.h>
void main()
{
	int index,*p1,*p2;
	index=39;
	p1=&index;
	p2=p1;
	printf("%d%d%d\n",index,*p1,*p2);
	*p1=13;
	printf("%d%d%d\n",index,*p1,*p2);
	getch();
}
