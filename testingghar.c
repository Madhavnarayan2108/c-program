#include<stdio.h>
int main()
{
	int min=0,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	min=a;
	if((b<a)&&(b<c))
	min=b;
	if((c<a)&&(c<b))
	min=c;
	printf("%d",min);
	return 0;
	
}
