#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int size = strlen(s);
    int odd = strlen(s) % 2;

    int c[256];
    for (int i = 0; i < 256; i++) c[i] = 0;
    for (int i = 0; i < size; i++) c[s[i]]++;
    
    int ganjil = 0;
    int yes = 1;
    for (int i = 0; i < 256; i++) {
        if (c[i] % 2 == 1) ganjil += 1;
    }
    
    if (odd) {
        if (ganjil > 1) {
            printf("NO\n");
        } else if (ganjil == 1) {
            printf("YES\n");
        } else printf("NO\n");
    } else {
        if (ganjil > 0) printf("NO\n");
        else printf("YES\n");
    }

}