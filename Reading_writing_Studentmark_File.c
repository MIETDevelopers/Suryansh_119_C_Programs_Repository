//Author Name:Suryansh sharma
//Creation Date: 21th March 2021
//Purpose:Program for reading and writing the student marks data to files
#include <stdio.h>//Preprocessive directive to include input output functions header file
#include <stdlib.h>//Preprocessive directive to include standard library header file
struct s {//start of structure body
	//Creating a user defined data type using structures.
	char name[50];//member array name
	int RollNo;//member variable
	int Marks;//member varaiabe
};//end of structure body
int main() {//start of main function body
	struct s a[10],b[10];// structure a , b array
	FILE *fptr;//pointer declarartion
	int i;//variable declaration
	fptr=fopen("D:\\Suryansh_119_C_Programs_Repository\\Reading_writing_Studentmark_File.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {//start of loop body
		fflush(stdin);
		//Scanning the entered Values.
		printf("Enter Name: ");//prinf calling to print enter name 
		gets(a[i].name);//reads
		printf("Enter Roll Number: ");//printf calling to print enter roll number
		scanf("%d",&a[i].RollNo);//scanf calling to input user input
		printf("Enter Marks: ");//printf calling to enter marks
		scanf("%d",&a[i].Marks);//scanf calling to input user input
	}//End of loop body
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("D:\\Suryansh_119_C_Programs_Repository\\Reading_writing_Studentmark_File.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");//printf calling to print entered details are
	for (i=0;i<1;++i) {//start of for loop body
		printf("	Name: %s\n	Roll Number: %d\n	Marks: %d",b[i].name,b[i].RollNo,b[i].Marks); //Printing the entered text.
	}//end of for loop body
	fclose(fptr); //Closing the program.
}//end of main function body