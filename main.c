#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, y, z;
    float m;
    int a, b, c;
    x = 2;
    z = 1;
    a = 3;
    b = 4;
    c = 5;
    
    //y=ax2+bx+c
    y = a*x*x + b*x + c;
    
    //m=x+y+z/3
    m = (x+y+z)/3;
    
    printf("y=%d, m=%f\n", y,m);
  
    system("PAUSE");	
    return 0;
}
