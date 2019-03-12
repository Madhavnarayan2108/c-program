#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array[6];
			int otp=0;

	printf("************************************************************************************************************************");
	printf("\n*****************************WELCOME TO PARAMOUNT SHOPPING COMPLEX WINTER SALE*********************************");
	int bill;
	printf("\nENTER THE BILL->");
	scanf("\n%d",&bill);
	if(bill<0)
	{
	printf("\nENTER THE AMOUNT IN POSITIVE NUMBER  NOW WAIT AS WE CONVERTING YOUR BILL IN POSITIVE NO........");
	bill=-bill;
	printf("\nCORRECT BILL IS->%d",bill);
}
	char g;
	printf("\nENTER YOUR GENDER <M/F> ->");
	scanf("\n %c",&g);
	if(bill<10000)
	{
	switch(g)
	{
		case 'm':
		case 'M':
			bill=bill-(0.05*bill);
			break;
		case 'f':
			bill=bill-(0.1*bill);
			break;
		case 'F':
			bill=bill-(0.1*bill);
			break;
		default:
			printf("\nENTER YOUR GENDER IN ONLY M OR F");
			exit(0);
	}
}
else
{
switch(g)
	{
		case 'm':
			bill=bill-(0.25*bill);
			break;
		case 'f':
			bill=bill-(0.30*bill);
			break;
		case 'M':
			bill=bill-(0.25*bill);
			break;
		case 'F':
			bill=bill-(0.30*bill);
			break;
		default:
			printf("\nENTER YOUR GENDER IN ONLY M OR F");
			exit(0);	
}
}
printf("\nYOUR BILL AFTER DISCOUNT IS -> %d",bill);
printf("\nENTER THE PAYMENT OPTION\n 1.CASH:\n 2.DEBIT CARD:");
int opt;
scanf("\n%d",&opt);
if((opt<0)||(opt>3))
{
	printf("******ENTER CORRECT OPTION******");
	exit(0);
}
if(opt==2)
{
	printf("\n**********************WELCOME TO PARAMOUNT BANK*******************************");
	printf("\nENTER THE 16 DIGITS DEBIT CARD NUMBER->");
	long long int carnum;
	scanf("%lld",&carnum);
	if((carnum>9999999999999999)||(carnum<1000000000000000))
	{
	printf("\nWRONG CARD NUMBER (ONLY 16 POSITIVE DIGITS IF ALLOWED IN CARD NUMBER");
	exit(0);
}
else
{
		printf("\nENTER 3 DIGIT CVV NUMBER ___");
		int cvv;
		scanf("\n%d",&cvv);
		if(cvv>999||cvv<100)
		{
		printf("\nWRONG CVV NUMBER(ONLY 3 POSITIVE DIGIT IS ALLOWED IN CVV NUMBER)");
		exit(0);
	}
	else
	{
		printf("\nENTER EXPIRY MONTH IN THE FORM MM(1 TO 12)");
		int month;
		scanf("%d",&month);
		if((month>12)||(month<1))
		{
			printf("\n*****ENTER VALID MONTH*****");
			exit(0);
		}
		else
		{
				printf("\nENTER EXPIRY YEAR IN THE FORM /20__(01 TO 99)");
		int year;
		scanf("%d",&year);
		if((year>99)||(year<01))
		{
			printf("\n*****ENTER VALID YEAR*****");
			exit(0);
		}
		else
		{
		printf("\nENTER 6 DIGIT OTP  SEND TO YOUR SCREEN\n\n");
		int i;
		for (i=1;i<=6;i++)
		{
			array[i-1]=((bill/(cvv%10))%(month%10)+2*i)%10;
			printf("%d",array[i-1]);
			otp=otp*10 +array[i-1]; 
			
		}
		int otp2;
		scanf(" \n%d",&otp2);
		if(otp!=otp2)
		{
			printf("\n******WRONG OTP******");
			exit(0);
		}
		else
		{
		printf("\n******PAYMENT SUCCESSFUL******");
		printf("\n\n BILL->%d \n ",bill);
	}
	}
	}
	}
}
}
else
{
	printf("\n******PAYMENT SUCCESSFUL******");
}
printf("\n**************************THANKYOU FOR CHOOSING PARAMOUNT SHOPING COMPLEX***********************************************");
printf("\n***************************************HAVE A NICE DAY *****************************************************************");
exit(0);
}
