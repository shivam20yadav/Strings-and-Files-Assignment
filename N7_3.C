#include<conio.h>
#include<stdio.h>

void main()
{
	char *a;
	int i;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	for(i=0;a[i] != '\0';i++)
		printf("%c \n",a[i]);
	getch();
}