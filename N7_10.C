#include<conio.h>
#include<stdio.h>

void main()
{
	char *a,*b,*c;
	int i,j;
	clrscr();
	printf("enter the first string:- ");
	gets(a);
	printf("enter the second string:- ");
	gets(b);
	for(i=0;a[i] != '\0';i++)
		c[i] = a[i];
	for(j=0;b[j] != '\0';j++,i++)
		c[i] = b[j];
	printf("%s ",c);
	getch();
}