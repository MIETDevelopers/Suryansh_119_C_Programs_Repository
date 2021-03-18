//Author name: Suryansh sharma
//Creation Date: 16-March-2021
//Purpose:Program to find Arithmetic operations using addition, subtraction, multiplication and remainder operator
#include <stdio.h>//preprocessor directive to include standard input output function header file
int main(){//main function body starts
    
    int a = 9,b = 4, c; //variable declaration and value assignment
    
    c = a+b; //logic for adding two numbers
    printf("a+b = %d\n",c); //printf statement to print addition output
    c = a-b;//logic for subtracting two numbers
    printf("a-b = %d\n",c);//printf statement to print subtraction output
    c = a*b;//logic for multiplying two numbers
    printf("a*b = %d\n",c);//printf statement to print multiplication output
    c = a/b;//logic for dividing two numbers
    printf("a/b = %d\n",c);//printf statement to print division output
    c = a%b;//logic for remainder 
    printf("Remainder = %d\n",c);//printf statement to print remainder output
    
    return 0;//return statement
}//main function body ends
