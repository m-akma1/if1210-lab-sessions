#include <stdio.h>
#include <math.h>
#include <float.h>
#include "line.h"

void CreateLine (LINE * L, POINT P1, POINT P2) {
    L->PAw = P1;
    L->PAkh = P2;
}

void BacaLINE (LINE * L) {
    while(1) {
        scanf("%f %f", &L->PAw.X, &L->PAw.Y);
        scanf("%f %f", &L->PAkh.X, &L->PAkh.Y);
        if (!(L->PAw.X == L->PAkh.X && L->PAw.Y == L->PAkh.Y)) break;
        printf("Invalid Line\n");
    }
}

void TulisLINE (LINE L) {
    printf("((%.2f,%.2f),(%.2f,%.2f))", L.PAw.X, L.PAw.Y, L.PAkh.X, L.PAkh.Y);
};

float PanjangLINE (LINE L) {
    float x = L.PAw.X - L.PAkh.X;
    float y = L.PAw.Y - L.PAkh.Y;
    float dist = x*x + y*y;
    return sqrtf(dist);
} 

float Gradien (LINE L) {
    float y = L.PAkh.Y - L.PAw.Y;
    float x = L.PAkh.X - L.PAw.X;
    return y / x;
} 

void GeserLINE (LINE * L, float deltaX, float deltaY) {
    L->PAw.X += deltaX;
    L->PAw.Y += deltaY;
    L->PAkh.X += deltaX;
    L->PAkh.Y += deltaY;
}

boolean IsTegakLurus (LINE L1, LINE L2) {
    float g = Gradien(L1) * Gradien(L2);
    float d = fabsf(g + 1);
    if (g < 0.0F && d < FLT_EPSILON) return true;
    else return false;
}

boolean IsSejajar (LINE L1, LINE L2) {
    float d = fabsf(Gradien(L1) - Gradien(L2));
    if (d < FLT_EPSILON) return true;
    else return false;
}