#include<stdio.h>
int main()
{
	char alf;
	printf("ENTER THE ALPHABET->");
	scanf(" %c",&alf);
	if((alf<65)||((alf>90)&&(alf<97)||(alf>122)))
	printf("ENTER IN BIGGER OR LOWER CASE (A-Z) ONLY.");
	else if(alf<97)
	printf("its in lower case is ->%c",alf+32);
	else
	printf(" its in upper case is ->%c",alf-32);
	return 0;
}
