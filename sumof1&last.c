#include<stdio.h>
#include<math.h>
int main()
{
	
	printf("ENTER THE NUMBER->");
    long num,b,sum=0;
	scanf("\n%d",&num);
	b=num;
	long count=0;
	while(num>0)
	{
	count+=1;
	num=num/10;
}	
if(count==1)
{sum=b;}
else
{sum=(b%10)+b/pow(10,count-1);}
printf("sum=%d",sum);
return 0;
}
