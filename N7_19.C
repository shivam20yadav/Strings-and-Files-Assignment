#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fptr;
	int i = 0;
	clrscr();
	fptr = fopen("new.txt","r");
	if(fptr == NULL)
	{
		printf("something not run");
	}
	else
	{
		while(!feof(fptr))
		{
			if(fgetc(fptr) == '\n' || feof(fptr))
			{
				i += 1;
			}
		}
	}
	printf("count of line :- %d",i);
	getch();
}