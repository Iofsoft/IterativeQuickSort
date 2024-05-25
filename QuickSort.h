#ifndef QUICKSORT_H
#define QUICKSORT_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>

    typedef struct t_stack{
        int top;
        int *items;
    }t_stack;

    #define DIGITS 5+1 // 5 Digitos do número mais um espaço.

    t_stack * create(int size);
    void push(t_stack *stack, int element);
    int pop(t_stack *stack);

    void quicksort(int arr[], int arrSize);
    int sort(int arr[], int start, int end);
    void swap(int* a, int* b);
    void setLeftArr ( int pivot, int start, t_stack *stack);
    void setRightArr ( int pivot, int end, t_stack *stack);

    void printArray(int arr[], int arrSize);
    int* getArray(int *arrSize);
    void clean_stdin();

#endif
