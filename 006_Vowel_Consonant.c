//Author name: Suryansh sharma
//Creation Date: 16-March-2021
//Purpose: Check whether the alphabet is vowel or consonent
#include <stdio.h>//Preprocessor directive to include input output function header file
int main(){//Start of main function body
    char ch;//Declaring a variable of character data type
      
    printf("Enter any alphabet: ");//Printf function calling to print an alphabet
    scanf("%c", &ch);//Scanf function calling to input user input

    switch(ch){//Start of Switch case body
        case 'a'://Case 1 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'e'://Case 2 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'i'://Case 3 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'o'://Case 4
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'u'://Case 5 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'A'://Case 6 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'E'://Case 7 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'I'://Case 8 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'O'://Case 9 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'U'://Case 10 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        default://Default statement 
            printf("Consonant");//Printf function calling to print consonent
    }//End of Switch case body
    return 0;//Return statement
}//End of the main function body 
