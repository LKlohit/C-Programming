//percentage of marks with grade//
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the value of a,b,c,d,e");
scanf("%d %d %d %d %d", &a, &b, &c ,&d ,&e);
f=(a+b+c+d+e)/5;
printf("percentage of marks= %d %%",f);
if(f>=90)
printf("grade A");
else if(f>=80 )
printf("grade B");
else if(f>=70 )
printf("grade C");
else if(f>=60 )
printf("grade D");
else if(f>=40 )
printf("grade E");
else if(f<40 )
printf("grade F");



return 0;	
}
