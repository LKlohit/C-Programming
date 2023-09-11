// greatest of 3 numbers //
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("enter the values of a=  b= c=");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c)
	{
		printf("the greatest of three numbers is a");
	}
	else if (b>c)
	printf("the greatest of three numbers is b");
	else 
	printf("the greatest of three numbers is c");
 return 0;	
	
}
