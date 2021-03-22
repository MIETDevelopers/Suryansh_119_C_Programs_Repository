//Author Name: Suryansh Sharma
//Creation Date: 21st March 2021
//Purpose: Program to perform  matrix multiplication
#include <stdio.h>//Preprocessor directive to include input output function header file
void getMatrixElements(int matrix[][10], int row, int column){//Function definition

   printf("\nEnter elements: \n");//Printf function calling to print elements

   for (int i = 0; i < row; ++i) {//For loop for rows
      for (int j = 0; j < column; ++j) {//For loop for columns
         printf("Enter a%d%d: ", i + 1, j + 1);//Printf function calling
         scanf("%d", &matrix[i][j]);//Scanf function calling to read user input
      }
   }
}
void multiplyMatrices(int first[][10],
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2){//Function definition

   for (int i = 0; i < r1; ++i){//For loop for rows
      for (int j = 0; j < c2; ++j){//For loop for column
         result[i][j] = 0;
      }
   }

   for (int i = 0; i < r1; ++i){//For loop for rows
      for (int j = 0; j < c2; ++j){//For loop for columns
         for (int k = 0; k < c1; ++k){//For loop for columns
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}

void display(int result[][10], int row, int column){//Function definition

   printf("\nOutput Matrix:\n");//Printf function calling to print output of the matrix 
   for (int i = 0; i < row; ++i){//For loop for rows
      for (int j = 0; j < column; ++j){//For loop for columns
         printf("%d  ", result[i][j]);//Printf function calling to print result
         if (j == column - 1)//If statement
            printf("\n");//Printf function calling for new line character
      }
   }
}

int main(){//Start of main function body
   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");//Printf function calling to print rows and columns of first matrix
   scanf("%d %d", &r1, &c1);//Scanf function calling to read user input
   printf("Enter rows and column for the second matrix: ");//Printf function calling to print rows and columns of second matrix
   scanf("%d %d", &r2, &c2);//Scanf function calling to read user input

   while (c1 != r2) {
      printf("Error! Enter rows and columns again.\n");//Printf function calling to print error
      printf("Enter rows and columns for the first matrix: ");//Printf function calling to print rows and columns of first matrix
      scanf("%d%d", &r1, &c1);//Scanf function calling to read user input
      printf("Enter rows and columns for the second matrix: ");//Printf function calling to print rows and columns of second matrix
      scanf("%d%d", &r2, &c2);//Scanf function calling to read user input
   }
   return 0;//Return statement
}//End of main body function
