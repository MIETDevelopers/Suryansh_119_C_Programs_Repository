//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:C program to swap two numbers using call by value
#include <stdio.h>//Preprocessive directive to include input output functions header file

void swap(int num1, int num2)/* Swap function definition */
{
    int temp;//variable declaration

    printf("In Function values before swapping: %d %d\n", num1, num2);//printf function calling to print Function values before swapping

    temp = num1;//value assignment 
    num1 = num2;//value assignment
    num2 = temp;//value assignment

    printf("In Function values after swapping: %d %d\n\n", num1, num2);//printf function calling to print Function values after swapping
}

/* main() function definition */
int main()
{
    int n1, n2;// variable declaration

    /
    printf("Enter two numbers: ");//printf function calling to print enter two numbers
    scanf("%d%d", &n1, &n2);// Input two integers from user

   
    printf("In Main values before swapping: %d %d\n\n", n1, n2); /* Print value of n1 and n2 in before swapping */

    /* Function call to swap n1 and n2 */
    swap(n1, n2);
    printf("In Main values after swapping: %d %d", n1, n2);// printf calling to print after swamp n1 n2

    return 0;//Return Statement
}//main body ends
