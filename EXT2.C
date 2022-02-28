#include<stdio.h>
#include<conio.h>

void main()
{
	char *a,*find;
	int i,j = 0,k,l=0,count = 0,temp= 0,o = 0;
	clrscr();
	printf("enter the string:- ");
	gets(a);
	printf("enter the finding string:- ");
	gets(find);
	for(i=0; find[i] != '\0';i++,temp++);
	for(i=0;a[i] != '\0';i++)
	{
		if(find[j] == a[i])
		{
			for(k=i,l=0;;k++,l++)
			{
				if(a[k] != find[l])
				{
					break;
				}
				else
				{
					count += 1;
				}
				if(count >= temp )
				{
					break;
				}
			}
			l = 0;
		}
		if(count == temp)
		{
			o += 1;
		}
		count = 0;
	}
	printf("total find:- %d",o);
	getch();
}