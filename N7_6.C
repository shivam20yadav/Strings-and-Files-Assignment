#include<conio.h>
#include<stdio.h>

void main()
{
	char *a,*b;
	int i,flag = 0;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	printf("enter the second string:- ");
	gets(b);
	if(strlen(a) != strlen(b))
		printf("not match");
	else
	{
		for(i = 0;a[i] != '\0';i++)
		{
			if(a[i] != b[i])
			{
				flag = 1;
				break;
			}

		}
		if(flag == 0)
			printf("string match");
		else
			printf("string not match");

	}
	getch();
}