//frequncy of character i string
#include<stdio.h>
int main()
{
	char str[10],n;
	int i,c=0;
	printf("\n enter string");
	gets(str);
	
	printf("\n enter the character which you want to count = ");
	scanf("%c",&n);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==n)
		 c++;
	}
	printf("\ntotal = %d",c);
	
	return 0;
}
