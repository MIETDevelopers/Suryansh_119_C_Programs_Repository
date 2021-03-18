#include<stdio.h>//preprocessor directive to include standard input output function header file

int main(){//main function body starts
	
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;//variable declaration
	raduisOfCircle = 7,sideOfSquare = 6,legthOfRectangle = 7,breadthOfRectangle =9;//value assignment
	
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//printf statement for printing area of circle
	
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));//printf statement for printing perimeter of circle
	
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//printf statement for printing area of square
	
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//printf statement for printing perimeter of square
	
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//printf statement for printing area of rectangle
	
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));//printf statement for printing perimeter of rectangle
	
	return 0;//return statement
}//main function body ends
