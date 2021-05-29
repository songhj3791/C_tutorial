#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 10

//malloc�� Ȱ���Ͽ� �������� �޸� �Ҵ��ϱ�

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


    return 0;



}
