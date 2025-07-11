#include <stdio.h>

int main() {
    int hh1, mm1, ss1, hh2, ss2, mm2;
    scanf("%d %d %d", &hh1, &mm1, &ss1);
    scanf("%d %d %d", &hh2, &mm2, &ss2);
    printf("%d %d %d\n", hh2 - hh1, mm2 - mm1, ss2 - ss1);
}