//Author name: Suryansh sharma
//Creation Date: 16-March-2021
//Purpose:Program on Area of Circle, Square and Rectangle based on user choice
#include<stdio.h>//preprocessor directive to include standard input output function header file

int main(){//main function body starts
	
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;//variable declaration
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);//scanf function call for user input
	
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//printf statement for printing area of circle(output)
	
	
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//printf statement for printing area of square(output)
	
	
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//printf statement for printing area of rectangle(output)
	
	return 0;//return statement
}//main function body ends
