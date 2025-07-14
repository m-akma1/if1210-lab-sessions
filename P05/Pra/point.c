#include <stdio.h>
#include <float.h>
#include <math.h>
#include "point.h"

void CreatePoint(POINT *P, float X, float Y) {
    P->X = X;
    P->Y = Y;
}

void BacaPOINT(POINT *P) {
    scanf("%f %f", &P->X, &P->Y);
}

void TulisPOINT(POINT P) {
    printf("(%f,%f)", Absis(P), Ordinat(P));
}

float GetX(const POINT P) {
    return Absis(P);
}

float GetY(const POINT P) {
    return Ordinat(P);
}

void SetX(POINT *P, float X) {
    P->X = X;
}

void SetY(POINT *P, float Y) {
    P->Y = Y;
}

boolean IsOrigin(POINT P) {
    if (Absis(P) == 0.0F && Ordinat(P) == 0.0F) return true;
    else return false;
}

boolean IsOnSbX(POINT P) {
    if (Ordinat(P) == 0.0F) return true;
    else return false;
}

boolean IsOnSbY(POINT P) {
    if (Absis(P) == 0.0F) return true;
    else return false;
}

int Kuadran(POINT P) {
    if (Absis(P) > 0.0F) {
        if (Ordinat(P) > 0.0F) return 1;
        else return 4;
    } else {
        if (Ordinat(P) > 0.0F) return 2;
        else return 3;
    }
}

boolean Equals(POINT P1, POINT P2) {
    float diff_x = fabsf(Absis(P1) - Absis(P2));
    float diff_y = fabsf(Ordinat(P1) - Ordinat(P2));
    if (diff_x < FLT_EPSILON && diff_y < FLT_EPSILON) return true;
    else return false;
}

boolean NonEquals(POINT P1, POINT P2) {
    float diff_x = fabsf(Absis(P1) - Absis(P2));
    float diff_y = fabsf(Ordinat(P1) - Ordinat(P2));
    if (diff_x < FLT_EPSILON && diff_y < FLT_EPSILON) return false;
    else return true;
}

float Distance(POINT P1, POINT P2) {
    float x = Absis(P1) - Absis(P2);
    float y = Ordinat(P1) - Ordinat(P2);
    float dist = x*x + y*y;
    return sqrtf(dist);
}

POINT MidPoint(POINT P1, POINT P2) {
    POINT MP;
    MP.X = (Absis(P1) + Absis(P2)) / 2;
    MP.Y = (Ordinat(P1) + Ordinat(P2)) / 2;
    return MP;
}