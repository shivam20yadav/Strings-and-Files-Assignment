#include<conio.h>
#include<stdio.h>

void main()
{
	char *a,temp;
	int i,j,c = 1,max = 0;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	for(i=0;a[i] != '\0';i++)
	{
		for(j=i+1;a[j] != '\0';j++)
			if(a[i] == a[j])
				c += 1;
		if(c > max)
		{
			max = c;
			temp = a[i];
		}
		c = 1;
	}
	printf("%c %d",temp,max);
	getch();
}