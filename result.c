#include<stdio.h>
int main()
{
float a,b,c,d,u;
char g;
printf("Enter the marks of 4 subjicts:");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
u=(a+b+c+d)/400*100;
printf(" the total %%age id %.2f",u);
if(u<=40)
{
	g='F';
}
else if(u<=50&&u>40)
{
	g='P';
}
else if(u<=60&&u>50)
{
	g='E';
}
else if(u<=70&&u>60)
{
	g='D';
}else if(u<=80&&u>70)
{
	g='C';
}else if(u<=90&&u>80)
{
	g='B';
}else if(u<=100&&u>90)
{
	g='A';
}
printf("\n your grade is %c",g);
return 0;
}
