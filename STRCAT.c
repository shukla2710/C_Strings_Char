//strcat :  append a copy of the source string to the end of the destination string.

#include<stdio.h>
main()
{
	char str1[40]="hello ";
	char str2[40]="welcome ";
	
	
	/*printf("\n\n Input string1  : ");
	gets(str1);
	
	printf("\n\n Input string2  : ");
	gets(str2);*/
	
	strcat(str1, str2);
	
	printf("\n\n After Concatenate : %s", str1);
}
