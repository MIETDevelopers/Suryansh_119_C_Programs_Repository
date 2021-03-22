//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:To store information of a student using union
#include <stdio.h>//Pre-process directive to include standard input and output functions header file
#include <string.h>//Preprocessive directive to include string header file 
 
union student {//union body starts
            char name[20];//members name array
            char subject[20];//member subject array
            float percentage;//member percentage
};//union body ends
 
int main() {//main function body starts
    union student record1;//declaration 
    union student record2;//declaration
 
    // assigning values to record1 union variable
       strcpy(record1.name, "Raju");//using strcpy to store raju in record1.name
       strcpy(record1.subject, "Maths");//using strcpy ro store math in record1.subject
       record1.percentage = 86.50;//assignment
 
       printf("Union record1 values example\n");//printf calling to print Union record1 values example
       printf(" Name       : %s \n", record1.name);//printf calling to print Name   
       printf(" Subject    : %s \n", record1.subject);//printf calling to print Subject   
       printf(" Percentage : %f \n\n", record1.percentage);//printf calling to print Percentage
 
    // assigning values to record2 union variable
       printf("Union record2 values example\n");//printf calling to print Union record2 values example
       strcpy(record2.name, "Mani");//using strcpy to store mani in record2.name
       printf(" Name       : %s \n", record2.name);//printf calling to print Name 
 
       strcpy(record2.subject, "Physics");//using strcpy to store record2.subject
       printf(" Subject    : %s \n", record2.subject);//printf calling to print Subject
 
       record2.percentage = 99.50;//value assignment
       printf(" Percentage : %f \n", record2.percentage);//printf calling to print Percentage 
       return 0;//Return statement
}//end of main function body
