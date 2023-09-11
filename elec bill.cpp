// elec bill//
#include<stdio.h>
#include<math.h>
main()
{
	float u,b;
	printf("enter the electric units u=");
	scanf("%f",&u);
	if(u>=0 && u<=100)
	{
		printf("elec bill b= %f",u*2);
	}
	else if (u>=101 && u<=250)
	{
		printf("elc bill b= %f", u*3.5);
		
	}
	else
	{
		printf("elc bill b= %f", u*5);
	}
	return 0;
}
