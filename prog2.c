#include <stdio.h>

void countvowels(char str[])
{
	int i=0,count=0;
	
	while(str[i] != '\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			count++;
		}
		i++;
	}
	printf("total vowels  %d",count);
}

int main()
{
	int i;
	printf("enter the vowels:");
	scanf("%d",&i);
	return 0;
}
