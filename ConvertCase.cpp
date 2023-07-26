#include <iostream> /* header for input and output functions */
#define MAX_SIZE 50 /* array contains 50 elements */
#include <string.h>

void upperCase(char *string); /* function declaration: upperCase is the name and pointer named "string" of type char is a parameter */

int main()
{
    char input[MAX_SIZE];
    for (int loop = 0; loop < 3; loop++) { /* this program will loop 3 times */
        std::cout << "Convert Case" << "\n"; /* "Convert Case" is a program that changes a string input of lowercase letters to uppercase letters.
                                                 Numbers and special characters in input will prompt an error message.*/
        std::cin.getline(input, MAX_SIZE); /* user enters any data which will be stored in the variable input */
        upperCase(input); /* calls the upperCase function */
        }
    return 0;
}

void upperCase(char *string){ /* function defintion */
    int i=0;
    while(string[i] != '\0') /* if string[i] is not null, then iterate using while loop */
    {
        if(string[i]>=90 && string[i]<=122){ /* checks for lowercase characters between a-z */
            string[i]=string[i]-32; /* changes every lowercase to uppercase by subtracting 32 which makes it uppercase */
            i++;
        }else if(string[i]>=65 && string[i]<=90){ /* checks for upper characters between A-Z */
            string[i]=string[i]; /* does not convert every uppercase letters */
            i++;
        }else if(string[i]== ' '){ /* checks for spaces */
            i++;
        }else{
            std::cout << "sorry, that is a wrong input." <<std::endl; /* characters other than lowercase and uppercase is wrong */
            return;
        }
    }
    std::cout << string << "\n"; /* output the string */
}
