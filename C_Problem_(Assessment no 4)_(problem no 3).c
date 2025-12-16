#include <stdio.h>
int main()
	{
	    int x=1;
	    int y=0;
	    loop: if(x<6)
	    {
	      y=y+x;
	      x=x+1;
	      goto loop;
	    }
	    printf("%d\n",y);
	   
	}
