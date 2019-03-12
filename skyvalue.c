#include<stdio.h>
int main()
{

	char input;
	printf(" Enter  any character:");
	scanf("%c",&input);
	if((input>='A'&&input<='Z')||(input>='a'&& input<='z'))
	{
		printf(" %c is an aphabet",input);
	}
	else if(input>='0'&&input<='9')
	{
		printf("%c is an digit",input);
	}
	else
	{
		printf(" %c is a special character",input);
	}
	return 0;
}

