#include<stdio.h>
#include<conio.h>

void main()
{
	char a;
	int i;
	clrscr();
	printf("enter the string:- ");
	scanf("%c",&a);
	if(a >= '0' && a <= '9')
		printf("number is digit");
	else
		printf("number is not digit");
	getch();
}