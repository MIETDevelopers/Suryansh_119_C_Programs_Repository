//Author Name:Suryansh sharma
//Creation Date: 20th March 2021
//Purpose:To demonstrate the use of free()
#include <stdio.h> //Preprocessive directive to include input output functions header file
#include <stdlib.h> //Preprocessive directive to include standard library header file
  
int main(){ //Start of the main body function
  
    // This pointer will hold the 
    // base address of the block created 
    int *ptr, *ptr1; //pointer declarartion
    int n, i;  //variable declarartion
  
    // Get the number of elements for the array 
    n = 5; 
    printf("Enter number of elements: %d\n", n); //Printf function calling to print Enter number of elements
  
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int)); 
  
    // Dynamically allocate memory using calloc() 
    ptr1 = (int*)calloc(n, sizeof(int)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL || ptr1 == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); //Printf function calling to print Memory successfully allocated using malloc
   
        // Free the memory 
        free(ptr); 
        printf("Malloc Memory successfully freed.\n"); //Printf function calling to print Malloc Memory successfully freed
  
        // Memory has been successfully allocated 
        printf("\nMemory successfully allocated using calloc.\n");  //Printf function calling to print Memory successfully allocated using calloc
  
        // Free the memory 
        free(ptr1); 
        printf("Calloc Memory successfully freed.\n"); //Printf function calling to print Calloc Memory successfully freed
    } 
  
    return 0; //Return Statement
} //main body function ends
