#include<conio.h>
#include<stdio.h>

void main()
{
	char *a;
	int i,c = 0,c1 = 0,c2 = 0;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	for(i=0;a[i] != '\0';i++)
	{
		if(a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
			c += 1;
		if(a[i] >= 33 && a[i] <= 47 || a[i] >= 58 && a[i] <= 64 || a[i] >= 91 && a[i] <= 96)
			c1 +=1;
		if(a[i] >= 48 && a[i] <= 57)
			c2 += 1;
	}
	printf("total char %d\ntotal spacial char %d\ntotal digit %d",c,c1,c2);
	getch();
}