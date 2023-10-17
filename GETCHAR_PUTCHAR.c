// getchar( ) function is used to read one character at a time from the key board.
//putchar( ) function is used to display one character at a time on the monitor.  
#include<stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t Input a character : ");
	ch=getchar();
	
	printf("\n\n\t Your entered character : ");
	putchar(ch);
}
