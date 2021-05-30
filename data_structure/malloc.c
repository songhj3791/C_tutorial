#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 10

//malloc을 활용하여 동적으로 메모리 할당하기

<<<<<<< HEAD
int main(void){

    int num1 = 20;
    int* numptr1 = &num1;

    int* numptr2;
    numptr2 = malloc(sizeof(int));

    printf("numptr1 = %p\n", numptr1);
    printf("numptr2 = %p\n", numptr2);

    free(numptr2);

    printf("numptr2 = %p\n", numptr2);
=======
typedef struct studentTag{
    char name[10];
    int age;
    double gpa;
} student;

int main(void){

    int* p;

    p = (int*)malloc(SIZE*sizeof(int));

    if(p == NULL){
        printf("Memory allocation has not been occurred, recheck the memory size\n");
    }

    for(int i = 0; i<SIZE; i++){
        p[i] = i;
    }

    for(int i = 0; i<SIZE; i++){
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    printf("After free\n");

    for(int i = 0; i<SIZE; i++){
        printf("p[%d] = %d\n", i, p[i]);
    }

    //==============================================


    student* student1;

    student1 = (student*)malloc(sizeof(student));
    if(student1 == NULL){
        printf("Memory allocation has not been occurred, recheck the memory size\n");
    }

    strcpy(student1->name, "Song");
    student1->age = 28;
    student1->gpa = 100.00;

    printf(student1->name);

    free(student1);

    printf(student1->name);
>>>>>>> 45ae718821cd70acce8f14ea4579cd278379489d


    return 0;



}
