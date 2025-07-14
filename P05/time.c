#include <stdio.h>
#include "time.h"

boolean IsTIMEValid (int H, int M, int S) {
    if (0 <= H && H <= 23 && 0 <= M && M <= 59 && 0 <= S && S <= 59) return true;
    else return false;
}

void CreateTime (TIME * T, int HH, int MM, int SS) {
    T->HH = HH;
    T->MM = MM;
    T->SS = SS;
}

void BacaTIME (TIME * T) {
    while(1) {
        scanf("%d %d %d", &T->HH, &T->MM, &T->SS);
        if (IsTIMEValid(T->HH, T->MM, T->SS)) break;
        printf("Jam tidak valid\n");
    }
}

void TulisTIME (TIME T) {
    printf("%d:%d:%d",T.HH, T.MM, T.SS);
}

long TIMEToDetik (TIME T) {
    return T.HH*3600 + T.MM*60 + T.SS;
}

TIME DetikToTIME (long N) {
    N %= 86400;

    TIME T;
    T.HH = N/3600;
    T.MM = (N - T.HH*3600)/60;
    T.SS = N - T.HH*3600 - T.MM*60;
    return T;
}

boolean TEQ (TIME T1, TIME T2) {
    if (TIMEToDetik(T1) == TIMEToDetik(T2)) return true;
    else return false;
}

boolean TNEQ (TIME T1, TIME T2) {
    if (TIMEToDetik(T1) != TIMEToDetik(T2)) return true;
    else return false;
}

boolean TLT (TIME T1, TIME T2) {
    if (TIMEToDetik(T1) < TIMEToDetik(T2)) return true;
    else return false;
}

boolean TGT (TIME T1, TIME T2) {
    if (TIMEToDetik(T1) > TIMEToDetik(T2)) return true;
    else return false;
}

TIME NextDetik (TIME T) {
    return DetikToTIME(TIMEToDetik(T) + 1);
}

TIME NextNDetik (TIME T, int N) {
    return DetikToTIME(TIMEToDetik(T) + N);
}

TIME PrevDetik (TIME T) {
    long l = TIMEToDetik(T) - 1;
    if (l < 0) l += 86400;
    return DetikToTIME(l);
}

TIME PrevNDetik (TIME T, int N) {
    long l = TIMEToDetik(T) - N;
    if (l < 0) l += 86400;
    return DetikToTIME(l);
}

long Durasi (TIME TAw, TIME TAkh) {
    long t1 = TIMEToDetik(TAw);
    long t2 = TIMEToDetik(TAkh);
    long result = t2 - t1;
    if (result < 0) result += 86400;
    return result;
}