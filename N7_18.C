#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fptr;
	char *a;
	int i=0;
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
			a[i] = fgetc(fptr);
			i++;
		}
	}
	printf("%s",a);
	getch();
}