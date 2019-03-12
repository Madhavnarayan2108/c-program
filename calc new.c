#include<stdio.h>
int main()
{
	int a,b,d=0;
	char c;
	printf(" Enter the two no.");
	scanf("%d\t%d",&a,&b);
	printf(" select the opration u want to do with your given numbers \n + \n - \n * \n / ");
	scanf(" %c",&c);
	switch(c)
	{
		case 43:
			d=a+b;
		printf("%d is the ans",d);
		case 45:
			d=a-b;
		printf("%d is the ans",d);
		case 42:
			d=a*b;
		printf("%d is the ans",d);
		case 47:
			d=a/b;
		printf("%d is the ans",d);
		default:
			printf(" enter valid choices");
	}
	return 0;
}

