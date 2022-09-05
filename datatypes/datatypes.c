// string and boolean are not the datatypes in C

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age = 22; // here datatype is integer
    float pi = 3.14; // float datatype
    char hashtag = '#'; // character datatype
    // these are some of the main datatypes in C

    //types of constant
    // three types - integer, real and character constants

    // keywords - these words are reserved (can't be used as variable names)
        // PROGRAM STRUCTURE 
    // #include <stdio.h> --> preprocessor directive (code will not work without initializing this directive)
    // main() function is starting function which the compiler founds while execution of the program
    // ; is a breakaway point
    // --> for comment 
    /* multiline
       comment*/ 
    printf("Hello World"); // to print the output in console
    // \n --> escape character provides next line
    printf("age is %d", age);
    // %d indicates that this double value will be replaced by age 
    // %d is a format specifier
    return 0; // this shall be at the end of main function which indicates zero errors

}