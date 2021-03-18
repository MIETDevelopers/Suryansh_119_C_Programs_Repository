//Author name: Suryansh Sharma
//Date:16-03-2021
//purpose:Find Euclidean distance between two points in a plane
#include<stdio.h> //Preprocessor directive to include input output function header file
#include<math.h>//Preprocessor directive to include maths header file
int main(){//start of the main body function 
	float x1,y1,x2,y2,d;//variable declaration
	printf("enter point1 (x1,y1)\n");//printf function calling to print the values of point x1,y1
	scanf("%f%f",&x1,&y1);//scanf function calling to input the values of point x1,y1
	printf("enter points2 (x2,y2)\n");//printf function calling to print the values of points x2,y2
	scanf("%f%f",&x2,&y2);//scanf function calling to input the values of point x2,y2
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//the distance formula (logic)
	printf("distance betweem these two points is %f \n" ,x1,x2,y1,y2,d);//printf funtion calling to print the distance between the two points 

	return 0;//returning statements
}//end of main body functions