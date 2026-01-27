#include "listdin.h"
#include <stdio.h>
#include <stdlib.h>


void CreateListDin(ListDin *l, int capacity) {
    l->buffer = malloc(capacity * sizeof(ElType));
    l->nEff = 0;
    l->capacity = capacity;
}

void dealocateList(ListDin *l) {
    free(l->buffer);
    l->nEff = 0;
    l->capacity = 0;
}

int listLength(ListDin l) {
    return l.nEff;
}

IdxType getFirstIdx(ListDin l) {
    return 0;
}

IdxType getLastIdx(ListDin l) {
    return l.nEff - 1;
}

boolean isIdxValid(ListDin l, IdxType i) {
    return (0 <= i && i < l.capacity);
}

boolean isIdxEff(ListDin l, IdxType i) {
    return (0 <= i && i < l.nEff);
}

boolean isEmpty(ListDin l) {
    return l.nEff == 0;
}

boolean isFull(ListDin l) {
    return l.nEff == l.capacity;
}

void readList(ListDin *l) {
    int n;
    do scanf("%d", &n);
    while(0 > n || n > l->capacity);
    l->nEff = n;
    for (int i = 0; i < n; i++) scanf("%d", l->buffer + i);
}

void printList(ListDin l) {
    printf("[");
    for (IdxType i = 0; i < l.nEff; i++) {
        printf("%d", l.buffer[i]);
        if (i < l.nEff - 1) printf(",");
    }
    printf("]");
}

ListDin plusMinusList(ListDin l1, ListDin l2, boolean plus) {
    ListDin result; 
    CreateListDin(&result, l1.capacity);
    result.nEff = l2.nEff;
    for (int i = 0; i < result.nEff; i++) {
        result.buffer[i] = plus ? (l1.buffer[i] + l2.buffer[i]) : (l1.buffer[i] - l2.buffer[i]);
    }
    return result;
}

boolean isListEqual(ListDin l1, ListDin l2) {
    if (l1.nEff != l2.nEff) return false;
    for (int i = 0; i < l1.nEff; i++) {
        if (l1.buffer[i] != l2.buffer[i]) return false;
    }
    return true;
}

IdxType indexOf(ListDin l, ElType val) {
    IdxType id = IDX_UNDEF;
    for (int i = 0; i < l.nEff; i++) {
        if (l.buffer[i] == val) {
            id = i;
            break;
        }
    }
    return id;
}

void extremeValues(ListDin l, ElType *max, ElType *min) {
    int tMax = l.buffer[0];
    int tMin = l.buffer[0];
    for (IdxType i = 0; i < l.nEff; i++) {
        if (l.buffer[i] > tMax) tMax = l.buffer[i];
        if (l.buffer[i] < tMin) tMin = l.buffer[i];
    }
    *max = tMax;
    *min = tMin;
}

void copyList(ListDin lIn, ListDin *lOut) {
    CreateListDin(lOut, lIn.capacity);
    lOut->nEff = lIn.nEff;
    for (IdxType i = 0; i < lOut->nEff; i++) {
        lOut->buffer[i] = lIn.buffer[i];
    }
}

ElType sumList(ListDin l) {
    ElType sum = 0;
    for (int i = 0; i < l.nEff; i++) sum += l.buffer[i];
    return sum;
}

int countVal(ListDin l, ElType val) {
    int count = 0;
    for (int i = 0; i < l.nEff; i++) if (l.buffer[i] == val) count++;
    return count;
}

int cmpAsc(const void* a, const void* b)  {
    return (*(int *)a - *(int *)b);
}

int cmpDes(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void sort(ListDin *l, boolean asc) {
    qsort(l->buffer, l->nEff, sizeof(ElType), asc ? cmpAsc : cmpDes);
}

void insertLast(ListDin *l, ElType val) {
    l->buffer[l->nEff] = val;
    l->nEff++;
}

void deleteLast(ListDin *l, ElType *val) {
    l->nEff--;
    *val = l->buffer[l->nEff];
}

void expandList(ListDin *l, int num) {
    void* temp = realloc(l->buffer, sizeof(ElType) * (l->capacity + num));
    if (temp) {
        l->buffer = temp;
        l->capacity += num;
    }
}

void shrinkList(ListDin *l, int num) {
    if (l->nEff > l->capacity - num) return;
    void* temp = realloc(l->buffer, sizeof(ElType) * (l->capacity - num));
    if (temp) {
        l->buffer = temp;
        l->capacity -= num;
    }
}

void compressList(ListDin *l) {
    shrinkList(l, l->capacity - l->nEff);
}