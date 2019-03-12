#include<stdio.h>
#include<math.h>
int main()
{
	int number,copynum,copy2num,count=0;
	printf("ENTER TH ENUMBER:\n");
	scanf("%d",&number);
	copynum=number;
	copy2num=number;
	while(copynum>0)
	{
		count+=1;
		copynum=copynum/10;
	}
	int testnum,i;
	number=number*number;
	for(i=0;i<count;i++)
	{
		testnum=testnum+(number%10)*pow(10,i);
		number=number/10;
	}
	if(testnum==copy2num)
	printf("automorphic");
	else
	printf("not automorphic");
	return 0;
}
