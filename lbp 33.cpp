#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],i;
	int sum=0;
	printf("enter the characters: ");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='0'||s[i]=='u'||s[i]=='E'||s[i]=='I'||s[i]=='0'||s[i]=='U'||s[i]=='A')
		sum++;
}
		printf("%d",sum);
		return 0;
	
	
}

