#include "QuickSort.h"

int* getArray( int *arrSize){
    scanf("%d", arrSize);
    char input[*arrSize * DEC_CASES];
    int* numbers = (int*)malloc(sizeof(int) * *arrSize);
    //fflush(stdin);  // Percebi que em Linux o fflush nao funciona quando fui compilar no wsl. Achei uma funçào no stackOverflow.
    clean_stdin();
    fgets(input, sizeof(input), stdin);
    int i = 0;
    int number = 0;
    char *index = input;

    while (sscanf(index, "%d", &number) == 1 ) {
        numbers[i] = number;
        i++;

        while (isdigit(*index) || *index == '-') {
            index++;
        }

        while (*index == ' ' || *index == '\n') {
            index++;
        }
    }
    return numbers;
}

void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
}

void clean_stdin(){
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}