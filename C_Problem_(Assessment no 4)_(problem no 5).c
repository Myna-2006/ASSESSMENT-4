#include <stdio.h>
int main()
	{
	    int x=1;
	    int y=0;
	    loop: if(x<11)
	    {
	      y=(x%2)*x;
	      printf("%d\n",y);
	      x=x+2;
	      goto loop;
	    }
	}
