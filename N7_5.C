#include<conio.h>
#include<stdio.h>

void main()
{
	char *a;
	int i,c = 1;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	for(i=0;a[i] != '\0';i++)
		if(a[i] == ' ')
			c += 1;
	printf("total word is %d",c);
	getch();
}