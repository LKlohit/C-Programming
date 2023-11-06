#include <stdio.h>
#include<string.h>

int main()
{
    char str1[500], str2[500];
    int i;    
    
     printf("Input first string : \n");
    scanf("%[^\n]", str1);
     printf("Input second string : \n");
    scanf("%[^\n]", str2);
   printf("concatenated string: \n");
     
    printf("%s%s", str1,str2);
	
	return 0;
}
 
