#include<conio.h>
#include<stdio.h>

void main()
{
	char *a,temp;
	int i,j,c = 0,max = 0,s = 99;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	for(i=0;a[i] != '\0';i++)
	{
		for(j=i;a[j] != '\0';j++)
		{
			if(a[j] == ' ')
			{
				i = j;
				break;
			}
			else
				c += 1;
		}
		if(c > max)
			max = c;
		if(c < s)
			s = c;
		c = 0;
	}
	printf("big:- %d small:- %d",max,s+1);
	getch();
}