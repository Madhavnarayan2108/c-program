#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 3 values");
	scanf("%d\t%d\t%d",&a,&b,&c);
	if(a==b&&b==c)
	printf(" the tri is equ=");
	else if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a))
	printf(" the tri is isole");
	else
	printf(" the tri is scalen");
	return 0;
}
