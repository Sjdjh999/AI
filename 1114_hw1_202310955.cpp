#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

typedef struct {
    int weight;
    int value;
} Jewel;

int compareJewel(const void* a, const void* b) {
    return ((Jewel*)a)->weight - ((Jewel*)b)->weight;
}

int compareInt(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
void push(int heap[], int* size, int value) {
    int idx = (*size)++;
    heap[idx] = value;
    while (idx > 0) {
        int parent = (idx - 1) / 2;
        if (heap[parent] >= heap[idx])
            break;
        int temp = heap[parent];
        heap[parent] = heap[idx];
        heap[idx] = temp;
        idx = parent;
    }
}

int pop(int heap[], int* size) {
    int top = heap[0];
    heap[0] = heap[--(*size)];
    int idx = 0;
    while (1) {
        int left = idx * 2 + 1, right = idx * 2 + 2;
        int maxidx = idx;
        if (left < *size && heap[left] > heap[maxidx])
            maxidx = left;
        if (right < *size && heap[right] > heap[maxidx])
            maxidx = right;
        if (maxidx == idx)
            break;
        int temp = heap[idx];
        heap[idx] = heap[maxidx];
        heap[maxidx] = temp;
        idx = maxidx;
    }
    return top;
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    Jewel* jewels = (Jewel*)malloc(n * sizeof(Jewel));
    int* bags = (int*)malloc(k * sizeof(int));
    int* heap = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &jewels[i].weight, &jewels[i].value);
    }
    for (int i = 0; i < k; i++) {
        scanf("%d", &bags[i]);
    }

    qsort(jewels, n, sizeof(Jewel), compareJewel);
    qsort(bags, k, sizeof(int), compareInt);

    
    int heapSize = 0;
    long long maxValue = 0;
    int j = 0;

    for (int i = 0; i < k; i++) {
        while (j < n && jewels[j].weight <= bags[i]) {
            push(heap, &heapSize, jewels[j].value);
            j++;
        }
        if (heapSize > 0) {
            maxValue += pop(heap, &heapSize);
        }
    }

    printf("%11d\n", maxValue);
    return 0;
}
