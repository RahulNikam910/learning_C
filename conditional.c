#include <stdio.h>

int main(){
// check number greathan 15
    int a;
    printf("Enter Your Number:");
    scanf("%d", &a);

    if(a > 15)
    {
        printf("The Number is greater than 15 \n");
    }

// positive or negative number or Zero
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if(num > 0){
        printf("Positive number \n");
    }
    else if(num < 0)
    {
        printf("Negative Number \n");
    }
    else
    {
        printf("Zero\n");
    }

// Marks of Student
    int marks;
    printf("Enter your Marks:");
    scanf("%d",&marks);

    if(marks >= 75)
    {
        printf("Distinction\n");
    }
    else if(marks >= 60)
    {
        printf("First Class\n");
    }
    else if(marks >= 40)
    {
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }

//Largest of three numbers
    int x,y,z;
    printf("Enter your number:");
    scanf("%d%d%d",&x,&y,&z);

    if(x > y && x > z){
        printf("X is the largest number \n");
    }
    else if(y > x && y > z){
        printf("y is the largest number \n");
    }
    else{
        printf("z is the largest number \n");
    }

//Even or Odd number
    int n;
    printf("Enter your Number:");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("The number is Even \n");
    }
    else{
        printf("The number is odd \n");
    }

//only one if
    int num1;
    int num2;
    int max;
    max = num1;
    printf("What is Your Number:");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(max > num2)
    {
        max = num2;
    }
    printf("The maximum number is %d \n", max);
    return 0;
}