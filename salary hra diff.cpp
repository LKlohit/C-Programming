//salary with diff hra//
#include<stdio.h>
#include<math.h>
main()
{
	float b,d,h,t,s;
	printf("enter basic salary,b=");
	scanf("%f", &b);
	d=0.16*b;
	printf("enter the tier t=");
	scanf("%f", &t);
	if(t=1)
{
	h=0.27*b;
}
else if (t=2)
{
	h=0.24*b;
}
else 
{
h=0.2*b; 
}
printf("the salary s = %f", b+d+h);
return 0;
}
