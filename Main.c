/*Por qual motivo deve-se usar uma pilha?
 *
 *  A pilha deve ser usada para simular o empilhamento de chamadas à funçao quicksort que o estilo recursivo faria.
 *
 *Considere o texto abaixo e discuta com o grupo. Coloque como comentário se a estratégia faz sentido e se ela foi implementada.
 *
 *  "A estratégia iterativa do algoritmo Quicksort oferece uma vantagem ao estabelecer limites para o tamanho da pilha.
 *  Em contraste com a abordagem recursiva, que insere duas partições na pilha de execução em ordem arbitrária, a versão iterativa
 *  verifica os tamanhos das partições antes de adicionar à pilha. Além disso, ao adotar uma política que prioriza a inserção dos
 *  índices da partição maior do vetor antes dos índices da partição menor, permite que o lado menor seja processado antes do lado maior.
 *  Como resultado, o tamanho da pilha é da ordem de O(log(n))."
 *
 *  Sim, a estratégia faz sentido e foi implementada. Nas linhas 27 e 34 do arquivo "QuickSort.c" existem checagens que somente adicionam
 *  novos "subarrays" na pilha caso possuam mais de um elemento. Ao contrário de uma  implementação recursiva que poderia realizar a chamada desnecessariamente.
 *  Além disso, existe uma checagem na linha 15 que define qual subarray é maior para ser adicionado primeiro na pilha e, portanto, ser processado depois do subarray menor.
 *  Só nao consegui entender realmente porque motivo seria mais eficiente processar o menor subarray primeiro, imagino que pode gerar menos chamadas recursivas, mas é dificil visualizar rs.
 */

#include "QuickSort.h"

int main() {
    int arrSize;
    int *arr = getArray(&arrSize);
    quicksort(arr, arrSize);
    printArray(arr, arrSize);
    free(arr);
}