//Author name:Suryansh sharma 
//Creation date: 18-03-2021
//Purpose: Check if a number is prime or not using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
int main(){//start of the main body function

   int n, count = 0;//Declaring variables of integer data type
 
    printf("Enter the Number.\n");//printf function calling to print numbers
    scanf("%d",&n);//scanf function calling to input user value in n
    
    int i=2; 
    while(i<=n/2){//start of while loop body
        ++i; //increment
        //Check for non prime number
        if(n%i==0){//if statement body start
            count=1;//count is being assigned to value 1
            break;//break statement
        }//if statement ends
    }
    //This will give the output.
    if (count==0)
        printf("%d is a Prime number.",n);//printf function calling to print a prime number
    else
        printf("%d is not a Prime number.",n);//printf function calling to print not a prime number
 
    getchar();
    return 0; //return statement  
}//end of main body function
