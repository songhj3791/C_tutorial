#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 10

//malloc�� Ȱ���Ͽ� �������� �޸� �Ҵ��ϱ�

int main(void){

    int num1 = 20;
    int* numptr1 = &num1;

    int* numptr2;
    numptr2 = malloc(sizeof(int));

    printf("numptr1 = %p\n", numptr1);
    printf("numptr2 = %p\n", numptr2);

    free(numptr2);

    printf("numptr2 = %p\n", numptr2);


    return 0;



}
