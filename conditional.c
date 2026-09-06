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

    return 0;
}