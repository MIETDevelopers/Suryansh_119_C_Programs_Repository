//Author name:Suryansh sharma
//Creation date: 18-03-2021
//Purpose: Maximum of n numbers using for loop

#include <stdio.h>//Preprocessor directive to include input output function header file
int main(){//start of the main body function
  int i,num,n,large=0;//Declaring variables of integer data type

  printf("How many numbers: ");//Printf function calling to print how many numbers
  scanf("%d",&n); //Scanf function calling to input the value given by user 
  
  for(i=0; i<n; i++){.//for loop body starts
    printf("\nEnter number %d: ",i+1);//prinf function calling to enter number with i+1
    scanf("%d",&num);//Scanf function calling to input the value given by user
    if(num>large)//using if statement
    large=num;//large is assigned to num
  }//for loop body ends

  printf("\nThe Largest number is %d",large);//Printf function calling to print The Largest number
  
  return 0;//return statement
}//end of main function body