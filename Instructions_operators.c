#include <stdio.h>
#include <math.h>

int main(){
//Type declaration Instructions
    // Valid
    int a = 10;
    int b = a;
    int c = b*3;
    int d = 2,e;

    int x, y, z;
    x = y = z = 3;
//Arithmetic Instructions
    // Valid
    int s,t;
    s=t=2;
    int p = s+t;
    int q = s*t;
    int r = s/t;

    int power = pow(s,t);
    printf("%d \n", power);

    printf("%d \n", 19%4);
    return 0;
}