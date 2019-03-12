#include<stdio.h>
int main()
{
	int i,a;
	printf("ENTER TH ENUMBER->");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",i,a,i*a);
	}
	return 0;
	}
