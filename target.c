#include<stdio.h>
#include<string.h>
int main()
{
	int a,rollno,selr,bill=0,time,c,l,s,m,b,k,phno=0,tax,card,cvv,date,otp;
	printf("welcom to randi khana server enjoy your ride on your order");
	printf("\n enter your age\n");
	scanf("%d",&a);
	if(a<18)
	{
		printf(" \n aabe jake luuli badi kar lakin jab aaya tho maje le le extra charge hoga 10percent ");
	}
	if(a>50)
	{
		printf(" \n aabe uncle ki umar ke bus ho gaya tera ab kya kare ga chal jab aaya hai tho maje le extra charge 5percent");
	}
	printf("\nenter your full rollno.");
	scanf("%d",&rollno);
	printf("\n Enter the time u want with r product");
	scanf("%d",&time);
	printf("select are product u want use \n 1.age=20 rate 500 per hour \n 2.age=24 rate 800 per hour \n 3.age=25 rate 1000 per hour \n 4.age=28 rate 1200 per hour \n 5.age=30 rate 1500 per hour \n 6.age=20 rate 1500 per hour with big boobs yum\n 7.age=24 rate 1500 per hour with big hips yum\n 8.age=40 rate 3000 per hour bhabhi ji yum\n 9.age=45 rate 4000 per hour  u chose is good if u select me\n 10.age=36 rate 5000 per hour every thing u want  with 3 sum");
	scanf("%d",&selr);
	if(selr==1)
	{
		bill=a*500;
	}
	if(selr==2)
	{
		bill=a*800;
	}
	if(selr==3)
	{
		bill=a*1000;
	}if(selr==4)
	{
		bill=a*1200;
	}if(selr==5)
	{
		bill=a*1500;
	}if(selr==6)
	{
		bill=a*1500;
	}if(selr==7)
	{
		bill=a*1500;
	}if(selr==8)
	{
		bill=a*3000;
	}if(selr==9)
	{
		bill=a*4000;
	}
	if(selr==10)
	{
		bill=a*5000;
	}
	printf("do u want condom for yess press 1 , for no enter 2");
	scanf("%d",&b);
	if(b==1)
	{
		printf(" select the condum \n 1. RS=40 \n 2. RS=50\n 3. RS=70\n 4. RS=90\n 5. RS=100\n 6. RS=100 with cover pack ");
		scanf("%d",&c);
		if(c==1)
		{
			bill=bill+40;
		}
		if(c==2)
		{
			bill=bill+50;
		}if(c==3)
		{
			bill=bill+70;
		}if(c==4)
		{
			bill=bill+90;
		}if(c==5)
		{
			bill=bill+100;
		}if(c==6)
		{
			bill=bill+100;
		}
	}
	printf(" \n Select the location\n 1. on rooom bed\n 2. roof \n 3. washroon taking bath\n 4. hostel room room mate ko bahar nikal ke ");
	scanf("%d",&l);
	printf(" your location is set as your request and its free for u as u selected %d",l);
	printf(" \n want any charactor  yess press 1 , for no enter 2 ");
	scanf("%d",&s);
	if(s==1)
	{
		printf("select the charactor\n 1.police women\n 2.bhabhi\n 3.chorni\n 4.teacher ");
		scanf("%d",&m);
		printf(" your charactor is set as your request and its cost u 1000 for as u selected %d",m);
		bill=bill+1000;
		}
		printf("selects the cloths u want to attended by our product  \n 1. saree \n 2. bikini \n 3.top and lower ");
		scanf("%d",&k);
		printf("\n your charactor is set as your request and its cost u 500 for as u selected %d",k);
		bill=bill+500;
		printf("\n enter your phone no.");
		scanf("%d",&phno);
		printf("your phone no is %d",phno);
		printf("\n you want bill with tax which is ligel in india =1 or, simpel bill underground without tax=2");
		scanf("%d",&tax);
		if(tax==1)
		{
			bill=bill+0.05*bill;
			printf("\n your bill is %d",bill);
		}
		if(tax==2)
		{
			printf("\nyour bill wich is not in eyes of gov is %d",bill);
		}
		printf("\nenter the debit cards no for payment ");
		scanf("%16d",&card);
		printf("\n ebter the cvv number");
		scanf("%3d",&cvv);
		printf("the expi.. date ");
		scanf("%4d",&date);
		printf("\n enter the 6 digit otp sent to your no.");
		scanf("%6d",&otp);
		printf("\n your payment has done , now enjoy with our product its all your sir  for any problem just report this no. %d",phno);
		return 0;
}
