#include <stdio.h>
#include<string.h>

int main()
{
    char str1[500], str2[500];
    int i;    
    
     printf("Input a string : \n");
    scanf("%s", str1);
   printf("different string: \n");
    for(i=0; str1[i]!='\0'; i++)
    {
    	str2[i]=str1[i];
    }
    printf("%s", str2);
	
	return 0;
}
 
