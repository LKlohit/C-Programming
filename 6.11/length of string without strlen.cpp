#include <stdio.h>

int main()
{
    char str1[50];
    int i, l = 0;

       printf("Find the length of a string:\n ");
       
 
    printf("Input a string : ");
    scanf("%s", str1);
 
    for (i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }
    printf("The string contains %d  number of characters. \n",l);
    printf("So, the length of the string %s is : %d\n\n", str1, l);
    return 0;
}
