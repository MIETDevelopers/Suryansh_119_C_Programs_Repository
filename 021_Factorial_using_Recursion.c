//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:Factorial using recursion
#include <stdio.h>//Preprocessive directive to include input output functions header file
 int main(){//Start of the main body function
 
    int I , num , // variable declaration
    fact = 1; //defining factorial as 1 since least value is 1
 
   printf (“Enter a number to calculate its factorial”);//Printf function calling to print Enter a number to calculate its factorial 
 
   scanf (“%d”, &num);////Scanf function calling for user input
 
   if (num<0) //if the input is a negative integer
   {
 
   printf (“Factorial is not defined for negative numbers.”);
   }
 
   else
   {
 
   for(i=1;i<= num;i++) //for loop doesn’t gets executed for input 0 as 1>0,  therefore fact value remains 1

{
 
fact = fact * i;  // keeps on multiplying and storing in the value of factorial till the input integer is reached
 
              }
 
   printf(“Factorial of %d = %dn”, num, fact);
 
    }
 
    return 0; //Return statement
 
}//end of main function body
