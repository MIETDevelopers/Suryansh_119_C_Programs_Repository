//Author Name:Suryansh sharma
//Creation Date: 17-03-2021
//Purpose: Sum of all digits of a number using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
int main(){//Start of the main function body
  int Number, Reminder, Sum=0;//Declaring variables of integer data type
  printf("Please Enter any number\n");//Printf function calling to print number
  scanf("%d", &Number);//Scanf function calling to input the value given by user 

  while(Number > 0){//Start of while loop body 
     Reminder = Number % 10;// remainder is assigned to Number % 10
     Sum = Sum+Reminder;// sum  is asssigned to Sum+Reminder
     Number = Number / 10;//number is assigned to Number / 10
  }//End of while body loop body
  printf("Sum of the digits of Given Number = %d\n", Sum);//Printf function to print sum of digits of given number
  return 0;//Return statement 
}//End of the main function body
