//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:To demonstrate the use of various string operations
#include <stdio.h>//Preprocessive directive to include input output functions header file
#include <string.h>//Preprocessive directive to include string header file 

int main () {//main body function start
   char str[20];//declaring array namely str with character data type

   /* copying the string "Apple" to the str and
    * displaying the return value of strcpy()
    */
   printf("Return value of function: %s\n", strcpy(str, "Apple"));//using strcpy function
   printf("String str1: %s\n", str);//printf calling to print str1

   return 0;//Return statement
}//main body ends
