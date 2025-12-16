#include <stdio.h>
int main()
{
   int x=10;
   int y,z,sum;
   loop: if(x<=100)
   {
       y=x%10;
       z=x/10;
       sum=y+z;
       if((x%2==1)&&(sum==7))
       {
       printf("%d\n",x);
       }
       x=x+1;
       goto loop;
   }
}
