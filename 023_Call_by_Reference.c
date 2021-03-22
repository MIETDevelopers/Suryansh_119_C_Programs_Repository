//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:C program to swap two numbers using call by Reference
#include <stdio.h>//Preprocessive directive to include input output functions header file

int main () {//start of main body

   /* local variable definition */
   int a = 100;//value assignment
   int b = 200;//value assignment
 
   printf("Before swap, value of a : %d\n", a );//printf calling to print before swap value of a
   printf("Before swap, value of b : %d\n", b );//printf calling to print before swap value of b
 
   /* calling a function to swap the values */
   swap(&a, &b);//call by reference
 
   printf("After swap, value of a : %d\n", a );//printf calling to print after swap value of a
   printf("After swap, value of b : %d\n", b );//printf calling to print after swap value of b
 
   return 0;//Return statement
}//end of main body 
void swap(int *x, int *y) /* Swap function definition */
{//start of swap function body

   int temp;//variable declaration

   temp = *x; /* save the value of x */
   *x = *y;    /* put y into x */
   *y = temp; /* put temp into y */
  
   return;//return to main
}//end of swap function body
