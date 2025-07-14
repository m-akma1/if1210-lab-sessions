#include <stdio.h>

// TODO: Perbaiki prosedur agar variabel total bisa diperbarui secara langsung
void countPrime(int a, int b, int* total) {
    // TODO: Implementasi prosedur untuk menghitung jumlah bilangan prima dalam rentang [A, B]
    // Saat ini, total tidak bisa diperbarui karena hanya merupakan salinan dari nilai di main()

    *total = b - (a - 1);
    if (a == 1) *total -= 1;
    for (int i = a; i <= b; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                *total -= 1;
                break;
            }
        }
    }
}


int main() {
    // TODO: Baca dua bilangan integer A dan B dalam satu baris
    // Input harus dalam format: "A B"

    // TODO: Perbaiki pemanggilan prosedur dengan menggunakan alamat variabel total
    // Agar perubahan nilai di dalam prosedur juga mempengaruhi nilai di main()

    int A, B, total;
    scanf("%d %d", &A, &B);
    countPrime(A, B, &total);
    printf("%d\n", total);
    return 0;
}