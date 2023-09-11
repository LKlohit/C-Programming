// cric//
#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("the point is  %d",a);
	}
	else if (b>=c)
	printf("the point is  %d",b);
	else 
	printf("the point is  %d",c);
 return 0;	
}
