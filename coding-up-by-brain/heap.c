#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

struct heapStruct {
    int* heaparray;
    int capacity;
    int size;
};

int main(void)
{
    return 0;
}

struct heapStruct *initHeap() {
    struct heapStruct * heap = (struct heapStruct*)malloc(sizeof(struct heapStruct));
    heap->capacity = SIZE;
    heap->heaparray = (int *)malloc(sizeof(int) * SIZE+1);
    heap->size = 0;

    return heap;
}
struct heapStruct * initHeapfromArray(int* values, int length) {
    struct heapStruct * heap = (struct heapStruct*)malloc(sizeof(struct heapStruct));
    heap->capacity = SIZE;
    heap->heaparray = (int *)malloc(sizeof(int) * length+1);
    heap->size = length;

    for(int i = 0; i < length; i++) {
        heap->heaparray[i+1] = values[i];
    }

    return heap;
}

void percolateDown(struct heapStruct *h, int index) {

}

void percolateUp(struct heapStruct *h, int index) {

}

int insert(struct heapStruct *h, int value) {

}

int removeMin(struct heapStruct *h) {
    for(int i = 1; i <= h->size; i++) {
        
    }
}

void printHeap(struct heapStruct *h) {
    for(int i = 1; i <= h->size; i++) {
        printf("%d ", h->heaparray[i]);
    }
}

void swap(struct heapStruct *h, int index1, int index2) {
    int temp = h->heaparray[index1];
    h->heaparray[index1] = h->heaparray[index2];
    h->heaparray[index2] = temp;
}