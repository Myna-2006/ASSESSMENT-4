#include <stdio.h>
int main()
{
	int x,y,z;
	int count = 0;
	printf("Enter a number: ");
	scanf("%d",&x);
loop:
	if(x>0)
	{
		y=x/10;
		z=x%10;
		count++;
		x=y;
		goto loop;
	}
	printf("%d",count);
}
