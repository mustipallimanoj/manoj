#include<stdio.h>
#include<string.h>
int main ()
{
	char month[10];
	int d;
	printf("enter the value :");
	scanf("%s%d",month,&d);
	if(strcmp(month,"july")==0&&d==5)
	{
		printf("1");
	}
	else
	printf("0");
	return 0;
	}