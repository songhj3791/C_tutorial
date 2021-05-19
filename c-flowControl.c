#include <stdio.h>

int main() {

    char target;

    printf("input : ");
    scanf("%c", &target);

    checkVowerConsonant(target);



}

void checkVowerConsonant(int value){

    //If char data has been passed to isAlpha function, data has been converted to integer automatically according to ascii table

    //65~90 : uppercase character range
    if(value >= 65 || value <= 90){
        printf("data is uppercase character");
    }else if(value){
    //97~122 : lowercase character range
        printf("data is lowercase character");
    }else{
        printf("data is not a alphabet");
    }
}




