// three numbers equal//
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	printf("enter values");
	scanf("%f%f%f", &a,&b,&c);
	if(a==b && b==c && c==a)
	printf("they r equal");
	else 
	printf("not equal");
	return 0;
}
