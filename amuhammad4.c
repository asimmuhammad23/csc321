#include <stdio.h>
#include <string.h>

int main() {
    // Declare 4 variables of different data types
    int integerVar;
    float floatVar;
    char charVar;
    char stringVar[50];

    // Ask the user to input values for each variable
    printf("Enter an integer: ");
    scanf("%d", &integerVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a character: ");
    scanf(" %c", &charVar); // Notice the space before %c to handle newline

    printf("Enter a string: ");
    scanf("%s", stringVar);

    // Compare the input values with certain conditions and display the result
    // Example comparisons:

    // 1. Check if integer is greater than 1
    if (integerVar > 1) {
        printf("The integer variable is greater than 1.\n");
    } else {
        printf("The integer variable is not greater than 1.\n");
    }

    // 2. Check if character is not 'a'
    if (charVar != 'a') {
        printf("The character variable does not equal the letter 'a'.\n");
    } else {
        printf("The character variable equals the letter 'a'.\n");
    }

    // 3. Check if float is greater than 5.0
    if (floatVar > 5.0) {
        printf("The float variable is greater than 5.0.\n");
    } else {
        printf("The float variable is not greater than 5.0.\n");
    }

    // 4. Check if string is "CSUDH"
    if (strcmp(stringVar, "CSUDH") == 0) {
        printf("The string variable equals 'CSUDH'.\n");
    } else {
        printf("The string variable does not equal 'CSUDH'.\n");
    }

    return 0;
}
