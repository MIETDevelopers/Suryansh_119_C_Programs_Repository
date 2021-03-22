//Author:Suryansh Sharma
//creation date:20-03-2021
//Purpose:store the information of student marks using structures and find total marks of individual student.
#include <stdio.h>  //Pre-process directive to include standard input and output functions header file
struct student {//structure body starts
    char name[50];//members name array
    int roll;//member variable
    float marks;//member variable 
} s;//variable declaration for dot operator
//structure body ends
int main() {//main function body starts
    //This will read the user input.
    printf("Enter information:\n");//printf function calling to print Enter information
    printf("Enter name: ");//printf function calling to print Enter name
    fgets(s.name, sizeof(s.name), stdin);//read input

    printf("Enter roll number: ");//printf function calling to print Enter roll number
    scanf("%d", &s.roll);//Scanf function calling to read user input
    printf("Enter marks: ");//printf function calling to print Enter marks
    scanf("%f", &s.marks);//Scanf function calling to read user input

    //This will print the user input.
    printf("Displaying Information:\n");//printf function calling to print Displaying Information
    printf("Name: ");//printf function calling to print Name
    printf("%s", s.name);//printf function calling to print name
    printf("Roll number: %d\n", s.roll);//printf function calling to print Roll number
    printf("Marks: %.1f\n", s.marks);//printf function calling to print marks

    return 0;  //return function
}//main function body ends
