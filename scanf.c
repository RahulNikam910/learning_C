#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("My age is : %d\n", age );

    //sum of two numbers
    
    int a;
    printf("Enter First Number: \n");
    scanf("%d",&a);

    int b;
    printf("Enter Second Number; \n");
    scanf("%d",&b);

    int sum = a + b;
    printf("sum of two number is: %d\n", sum);
    return 0;
}