#include<stdio.h>
int main()
{
	int a,b,choice,c;
	printf(" Enter any 2 no.");
	scanf("%d\t%d",&a,&b);
	printf("1.Addition of 2 no \n2.odd\even no \n3.swapping of no. ");
	printf(" enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		c=a+b;
		printf("addition of %d & %d is %d",a,b,c);
		break;
		case 2:
		(a%2==0)?printf(" %d is even",a):printf(" %d is odd",a);
		(b%2==0)?printf(" %d is even",b):printf(" %d is odd",b);
		break;
		case 3:
			c=a;
			a=b;
			b=c;
			printf("a=%d & b=%d",a,b);
			break;
			default:
			printf("enter valide choice"); 
	}
	return 0;
}
