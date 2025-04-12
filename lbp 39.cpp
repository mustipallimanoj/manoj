#include<stdio.h>
#include<math.h>
int main()
{
	int a,m,n,x,y;
	printf("enter the values");
	scanf("%d%d%d",&a,&m,&n);
	x=m*n;
	y=pow(a,x);
	printf("%d",y);
	return 0;
}
