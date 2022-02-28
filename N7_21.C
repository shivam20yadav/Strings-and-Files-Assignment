#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fptr;
	char *str;
	int i = 0;
	clrscr();
	fptr = fopen("new.txt","r");
	if(fptr == NULL)
		printf("something went wrong");
	else
	{
		printf("copy file..\n");
		while(!feof(fptr))
		{
			str[i] = fgetc(fptr);
			i += 1;
		}
	}
	fclose(fptr);
	fptr = fopen("text.txt","w");
	if(fptr == NULL)
		printf("something went wrong");
	else
	{
		fprintf(fptr,"%s",str);
	}
	getch();
}