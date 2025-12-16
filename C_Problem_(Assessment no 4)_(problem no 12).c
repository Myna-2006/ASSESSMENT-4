#include <stdio.h>
int main()
{
	int x,y,z,a;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d",&x);
loop:
	if(x>0)
	{
		y=x/10;
		z=x%10;
		x=y;
		a=z;
		sum = sum+a;
		goto loop;
	}
	printf("%d",sum);
}
