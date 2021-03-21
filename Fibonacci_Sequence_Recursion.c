//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:Fibonacci sequence using recursion
#include<stdio.h>//Preprocessive directive to include input output functions header file
int main(){//Start of the main body function
int first=0, second=1, i, n, sum=0;//Declaring variable and Value Assignment
printf("Enter the number of terms: ");//Printf function calling to print Enter the number of terms
scanf("%d",&n);//Scanf function calling to input the value given by user
//accepting the terms
printf("Fibonacci Series:");//Printf function calling to print Fibonacci Serie
for(i=0 ; i<n ; i++)
{
if(i <= 1)
{
sum=i;
}
//to print 0 and 1
else
{
sum=first + second;//logic sum =first + second
first=second;//first is assigned to second
second=sum;//second is assigned to sum
//to calculate the remaining terms.
//value of first and second changes as new term is printed.
}
printf(" %d",sum)//printf calling to print sum
}
return 0;//return statement
}//end of main function body