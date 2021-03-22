//Author Name:Suryansh sharma
//Creation Date: 21th March 2021
//Purpose:Array of structures for student marks for each student and passing  it to function for various operations
#include <stdio.h>//Pre-process directive to include standard input and output functions header file
#include <string.h>//Preprocessive directive to include string header file 
 
struct student {//structure body starts
     int id;//member id
     char name[30];//member name array
     float percentage;//member percentage
};//structure body ends
 
int main() {//main function body starts
     int i;//variable declaration
     struct student record[3];//structure array declaration
 
     // 1st student's record
     record[0].id=1;//assigning value using dot operator
     strcpy(record[0].name, "Suryansh");//using strcpy to store value suryansh
     record[0].percentage = 99.0;//assigning value
 
     // 2nd student's record         
     record[1].id=2;//assigning value using dot operator
     strcpy(record[1].name, "Ram");//using strcpy to store value Ram
     record[1].percentage = 99.1;//assigning value
 
     // 3rd student's record
     record[2].id=3;//assigning value using dot operator
     strcpy(record[2].name, "Sham");//using strcpy to store value sham
     record[2].percentage = 99.2;//assigning value
 
     for(i=0; i<3; i++){//for loop body starts
         printf(" Records of STUDENT : %d \n", i+1);//printf function calling to print Records of STUDENT
         printf(" Id is: %d \n", record[i].id);//printf function calling to print Id
         printf(" Name is: %s \n", record[i].name);//printf function calling to print name 
         printf(" Percentage is: %f\n\n",record[i].percentage);//printf function calling to print percentage
     }//end of for loop body
     return 0;//Return Statement
}//end of main function body