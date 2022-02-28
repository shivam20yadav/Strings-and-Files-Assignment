#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fptr;
	clrscr();
	fptr = fopen("new.txt","r");
	if(fptr == NULL)
	{
		printf("someting not run");
	}
	else
	{
		while(!feof(fptr))
		{
			printf("%c",fgetc(fptr));
		}
	}
	getch();
}