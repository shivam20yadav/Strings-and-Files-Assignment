#include<conio.h>
#include<stdio.h>

void main()
{
	FILE *fptr;
	char *str;
	int i=0;
	clrscr();
	fptr = fopen("text.txt","r");
	if(fptr == NULL)
	{
		printf("can not open");
		exit();
	}
	while(!feof(fptr))
	{
		str[i] = fgetc(fptr);
		i+=1;

	}
	fclose(fptr);
	fptr = fopen("text.txt","w");
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] == ' ')
			str[i] = '@';
	}
	fprintf(fptr,"%s",str);
	fclose(fptr);
	getch();
}