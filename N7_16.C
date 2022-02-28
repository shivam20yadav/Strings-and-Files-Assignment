#include<conio.h>
#include<stdio.h>

void main()
{
	FILE *fptr;
	char *a;
	clrscr();
	fptr = fopen("new.txt","w+");
	if(fptr == NULL)
	{
		printf("error to load");
		exit();
	}
	else
	{
		printf("enter the string:- ");
		gets(a);
		fprintf(fptr,"%s",a);
		printf("file write complete");
	}
	getch();
}