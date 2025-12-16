#include <stdio.h>
int main()
{
	int x,y,z,a;
	printf("Enter a number: ");
	scanf("%d",&x);
loop:
	if(x>0)
	{
		y=x/10;
		z=x%10;
		x=y;
		printf("%d",z);
		goto loop;
	}

}
