#include <stdio.h>

int main() {
    // first printf usage
    printf("Welcome to C World\n");

    int favNum;

    printf("Enter your favorite number: ");
    scanf("%d", &favNum);
    // need to declared memory value(&favNum) to store value to variable

    printf("%d\n", favNum);

    int swap1, swap2;
    swap1 = 10;
    swap2 = 20;

    swapNumbers(swap1, swap2);

    int intType;
    double doubleType;
    char charType;
    float floatType;

    printf("Size of int : %zu bytes\n", sizeof(intType));
    printf("Size of double : %zu bytes\n", sizeof(doubleType));
    printf("Size of char : %zu bytes\n", sizeof(charType));
    printf("Size of float : %zu bytes\n", sizeof(floatType));

    char charTarget = NULL;
    int intTarget;

    fflush(stdin);

    printf("input character : ");
    scanf("%c", &charTarget);
    charToAscii(charTarget);

    fflush(stdin);


    printf("input integer : ");
    scanf("%d", &intTarget);
    AsciiToChar(intTarget);

}


void swapNumbers(var1, var2){
    printf("Function called\n var1 : %d\n var2 : %d\n", var1, var2);

    int temp;

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf(" var1 : %d\n var2 : %d\n", var1, var2);


}

void charToAscii(char target){

    printf("Char to ASCII : %d\n", target);

}

void AsciiToChar(int ascii){

    printf("ASCII to Char : %c\n", ascii);

}



















