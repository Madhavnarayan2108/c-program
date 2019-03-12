#include<stdio.h>
#include<math.h>
int main()
{
	int c,b,sum=0,a;
		printf("ENTER THE NUMBER->");
    long num;
	scanf("\n%d",&num);
	b=num;
	a=num;
	int count=0;
	while(num>0)
	{
	count+=1;
	num=num/10;
}
	while(b>0)
	{
		c=b%10;
		c=pow(c,count);
		sum=sum+c;
		b=b/10;
	}
	if (sum==a)
	{
	printf("it is armstrong number");
	}
	else
	{
	printf("it is not a armstrong number");
	}
	return 0;
}
