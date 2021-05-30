#include <stdlib.h>
#include <stdio.h>

#define MAX_STACK_SIZE 100

typedef struct{
    char name[10];
    int age;
    float gpa;
}student;

typedef struct {
    student data[MAX_STACK_SIZE];
    int top;
}student_stack;

int is_empty(student_stack* stack){
    return (stack->top == -1);
}

int is_full(student_stack* stack){
    return (stack->top == MAX_STACK_SIZE-1);
}

void init_stack(student_stack* stack){
    stack->top = -1;
    //case : top = -1, empty stack
}

void push(student_stack* stack, student target){
    if(is_full(stack) == 1){
        printf("error : stack has been fulled, please remove element in stack\n");
        return;
    }
    stack->data[++(stack->top)] = target;
}

student pop(student_stack* stack){
    if(is_empty(stack)==1){
        printf("error : stack is currently empty");
        exit(1);
    }
    return stack->data[(stack->top)--];
    //reduce top -1 to delete top element,
    //Still can access to the deleted element by not using top element
    //Anyway memory has always been allocated and there is no way to change it`s allocated memory on stack.
    //So, reducing top property is the only way to delete(pop) data on stack
}

student peek(student_stack* stack){
    if(is_empty(stack)==1){
        printf("error : stack is currently empty");
        exit(1);
    }
    return stack->data[stack->top];
}

student make_student(){

    student student_data;


    printf("Enter student`s name : ");
    scanf("%s", student_data.name);

    printf("\nEnter student`s age: ");
    scanf("%d", &(student_data.age));

    printf("\nEnter student`s gpa : ");
    scanf("%f", &(student_data.gpa));


    return student_data;
}


int main(void){

    student_stack* students;
    init_stack(students);

    push(students, make_student());
    push(students, make_student());
    push(students, make_student());

    for(int i = 0; i<students->top+1; i++){
        printf("%s\n", students->data[i].name);
        printf("%d\n", students->data[i].age);
        printf("%f\n", students->data[i].gpa);
    }

}
