#include <stdio.h>

int main()
{
    long long a,b,c,d;
    long long a2,b2,c2,d2;
    long long a3,b3,c3,d3;
    b = 0;
    long hit = 0;
 long long x,y,z;
    scanf("(%lld+%lld)x(%lld-%lld)\n", &a,&b, &c, &d);
     scanf("(%lld+%lld)x(%lld-%lld)\n", &a2,&b2, &c2, &d2);
      scanf("(%lld+%lld)x(%lld-%lld)", &a3,&b3, &c3, &d3);
  x = (a+b)*(c-d);
  y = (a2+b2)*(c2-d2);
  z = (a3+b3)*(c3-d3);
    printf("%lld %lld %lld\n", x, y, z);
    
    return 0;
}