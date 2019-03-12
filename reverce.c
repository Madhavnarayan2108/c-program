#include<stdio.h>
int main()
{
	int a,b,count=0,i;
	printf("ENTER TH ENUMBER->");
	scanf("%d",&a);
	b=a;
	printf("\nREVERCE NO->");
	while(a>0)
	{
	count+=1;
	a=a/10;
}
	for(i=1;i<=count;i++)
	{
		printf("%d",b%10);
	b=b/10;
}
	return 0;
}
