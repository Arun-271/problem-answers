// find the factorial using c . 
// Step 1 Recursion.

#include <stdio.h>

int factorial (int n);
int main()
{
    int number;
    scanf(" %d" , &number);
    int result = factorial(number);
    printf("Factorial of the number %d is : %d",number, result);
    return 0;
}
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}