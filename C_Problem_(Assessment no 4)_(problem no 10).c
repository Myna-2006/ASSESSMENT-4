#include <stdio.h>
int main()
{
   int x=10;
   int y,z,sum;
   loop: if(x<100)
   {
       y=x%10;
       z=x/10;
       sum=y+z;
       if((x%2==1)&& z==7)
       {
       printf("%d\n",sum);
       }
       x=x+1;
       goto loop;
   }
}
