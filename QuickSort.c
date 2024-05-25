#include "QuickSort.h"

void quicksort(int arr[], int arrSize) {
    t_stack *stack = create(arrSize);
    int start = 0;
    int end = arrSize - 1;
    push(stack, start);
    push(stack, end);

    while (stack->top >= 0) {
        end = pop(stack);
        start = pop(stack);
        int pivot = sort(arr, start, end);

        if (pivot - start > end - pivot) { // Esquerda é maior
            setLeftArr(pivot, start, stack);
            setRightArr(pivot, end, stack);
        } else { // Direita é maior ou iguais
            setRightArr(pivot, end, stack);
            setLeftArr(pivot, start, stack);
        }
    }
    free(stack->items);
    free(stack);
}

void setLeftArr(int pivot, int start, t_stack *stack) {
    if (start < pivot - 1) {
        push(stack, start);
        push(stack, pivot - 1);
    }
}

void setRightArr(int pivot, int end, t_stack *stack) {
    if (pivot + 1 < end) {
        push(stack, pivot + 1);
        push(stack, end);
    }
}

int sort(int arr[], int start, int end) {
    int pivot = arr[end]; // Escolhendo o último elemento como pivot
    int i = (start - 1);
    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}