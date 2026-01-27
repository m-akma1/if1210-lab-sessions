#include "liststatik.h"
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void CreateListStatik(ListStatik *l) {
    for(IdxType i = 0; i < CAPACITY; i++) l->contents[i] = MARK;
}

int listLength(ListStatik l) {
    int length = 0;
    for(IdxType i = 0; i < CAPACITY; i++) {
        if (l.contents[i] == MARK) break;
        else length++;
    }
    return length;
}

IdxType getFirstIdx(ListStatik l) {
    return IDX_MIN;
}

IdxType getLastIdx(ListStatik l) {
    return listLength(l) - 1;
}

boolean isIdxValid(ListStatik l, IdxType i) {
    if (IDX_MIN <= i && i < CAPACITY) return true;
    else return false;
}

boolean isIdxEff(ListStatik l, IdxType i) {
    if (IDX_MIN <= i && i < listLength(l)) return true;
    else return false;
}

boolean isEmpty(ListStatik l) {
    return listLength(l) == 0;
}

boolean isFull(ListStatik l) {
    return listLength(l) == CAPACITY;
}

void readList(ListStatik *l) {
    int n;
    do scanf("%d", &n);
    while (IDX_MIN > n || n > CAPACITY);
    
    CreateListStatik(l);
    for (IdxType i = 0; i < n; i++) scanf("%d\n", &l->contents[i]);
}

void printList(ListStatik l) {
    printf("[");
    int len = listLength(l);
    for (IdxType i = 0; i < len; i++) {
        printf("%d", l.contents[i]);
        if (i < len - 1) printf(",");
    }
    printf("]");
}

ListStatik plusMinusList(ListStatik l1, ListStatik l2, boolean plus) {
    ListStatik result;
    CreateListStatik(&result);

    int len = listLength(l1);
    for (IdxType i = 0; i < len; i++) {
        result.contents[i] = (plus) ? (l1.contents[i] + l2.contents[i]) : (l1.contents[i] - l2.contents[i]);
    }

    return result;
}

boolean isListEqual(ListStatik l1, ListStatik l2) {
    int len = listLength(l1);
    if (len != listLength(l2)) return false;
    for (IdxType i = 0; i < len; i++) {
        if (l1.contents[i] != l2.contents[i]) return false;
    }
    return true;
}

int indexOf(ListStatik l, ElType val) {
    IdxType idx = IDX_UNDEF;
    int len = listLength(l);
    for (IdxType i = 0; i < len; i++) {
        if (l.contents[i] == val) {
            idx = i;
            break;
        }
    }
    return idx;
}

void extremeValues(ListStatik l, ElType *max, ElType *min) {
    int tMax = l.contents[0];
    int tMin = l.contents[0];
    int len = listLength(l);
    for (IdxType i = 0; i < len; i++) {
        if (l.contents[i] > tMax) tMax = l.contents[i];
        if (l.contents[i] < tMin) tMin = l.contents[i];
    }
    *max = tMax;
    *min = tMin;
}

void insertFirst(ListStatik *l, ElType val) {
    insertAt(l, val, 0);
}

void insertAt(ListStatik *l, ElType val, IdxType idx) {
    if (isFull(*l)) return;
    for (IdxType i = listLength(*l); i > idx; i--) l->contents[i] = l->contents[i - 1];
    l->contents[idx] = val;
}

void insertLast(ListStatik *l, ElType val) {
    insertAt(l, val, listLength(*l));
}

void deleteFirst(ListStatik *l, ElType *val) {
    deleteAt(l, val, 0);
}

void deleteAt(ListStatik *l, ElType *val, IdxType idx) {
    if (isEmpty(*l)) return;
    *val = l->contents[idx];
    int len = listLength(*l);
    for (IdxType i = idx; i < len - 1; i++) l->contents[i] = l->contents[i + 1];
    l->contents[len - 1] = MARK;
}

void deleteLast(ListStatik *l, ElType *val) {
    deleteAt(l, val, listLength(*l) - 1);
}

int cmpAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int cmpDes(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void sortList(ListStatik *l, boolean asc) {
    qsort(l->contents, listLength(*l), sizeof(ElType), asc ? cmpAsc : cmpDes);
}