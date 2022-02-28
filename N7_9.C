#include<conio.h>
#include<stdio.h>

void main()
{
	char *a,temp;
	int i,j;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	printf("%s \n",a);
	for(i=0;a[i] != '\0';i++)
	{
		for(j=i+1;a[j] != '\0';j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%s",a);
	getch();
}