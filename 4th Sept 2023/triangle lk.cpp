#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of triangle \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && a==c)
	printf("equilateral");
	if(a==b || b==c || a==c)
	printf("isosceles");
	else 
	printf("scalene");
	return 0;
}
