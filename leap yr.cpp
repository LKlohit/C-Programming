// leap yr//
#include<stdio.h>
#include<math.h>
main ()
{
float y;
printf("enter the value of y =");
scanf("%f", &y);
if(y% 4==0 && (y% 100!=0 || y% 400==0))
{
	printf("the given year is a leap year ");

}
else 
printf("the give year is not a leap year");
return 0;
}
