//Author name: Suryansh Sharma
//Date:17-03-2021
//purpose:Fibonacci sequence using for loop
#include<stdio.h>//Preprocessor directive to include input output function header file
int main (){//start of the main body function 
 
  int first = 0, second = 1, third, i, n=50;//value declaration and assignment of integer data type
 
  printf ("Enter the length of the fibonacci series \n");//prinf calling to print Enter the length of the fibonacci series
 
  scanf ("%d", &n);//scanf function calling to input user value in n
 
  printf ("The Fibonacci series is :\n");//prinf calling to print The fibonacci series is 
 
  printf ("%d%d", first, second);//printf function calling to print value first second
 
  for (i = 2; i <=n; i++){//for loop body start

      third = first + second;//logic to get fibonacci sequence
 
      printf ("%d ", third);//printf function calling to print third
 
      first = second;//first equal to second
 
      second = third;//second equal to third
 
    }//for loop body end
 
  return 0;//return statement
 
}//main body function ends
