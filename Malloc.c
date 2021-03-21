//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:To demonstrate the use of malloc()
#include <stdio.h> //Preprocessive directive to include input output functions header file
#include <stdlib.h> //Preprocessive directive to include standard library header file
  
int main(){ //Start of the main body function
  
    // This pointer will hold the 
    // base address of the block created 
    int* ptr; //pointer declaration
    int n, i; //variable declaration
  
    // Get the number of elements for the array 
    n = 5; 
    printf("Enter number of elements: %d\n", n); //Printf function calling to print Enter number of elements
  
    
    ptr = (int*)malloc(n * sizeof(int)); // Dynamically allocate memory using malloc() 
  
    
    
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); // Check if the memory has been successfully 
        exit(0); // allocated by malloc or not 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); //Printf function calling to print Memory successfully allocated using malloc
  
        // Get the elements of the array 
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); //Printf function calling to print The elements of the array are
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    } 
  
    return 0; //return Statement
} //end of main function body