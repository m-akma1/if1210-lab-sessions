#include <stdio.h>

int totalPisang(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

double rerataPisang(double total, int jumlah) {
    return total/jumlah;
}

void pesanPesta(double rerata) {
    if (rerata >= 10) printf("Pesta Nimons Sukses!\n");
    else printf("Pesta Nimons Gagal, kumpulkan lebih banyak pisang!\n");
}

int main() {
    int a, b, c, d, e;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);

    int total = totalPisang(a, b, c, d, e);
    double rerata = rerataPisang(total, 5);
    printf("%d\n%lf\n", total, rerata);
    
    pesanPesta(rerata);
}