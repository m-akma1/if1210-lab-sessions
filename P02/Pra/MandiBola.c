#include <stdio.h>
#include "MandiBola.h"

long last(long* x) {
    long y = *x % 10l;
    *x /= 10l;
    return y;
}

int ilast(int* x) {
    int y = *x % 10;
    *x /= 10;
    return y;
}
 
void SelamatDatang(int input) {
    int jumlah_anak = ilast(&input);
    int jumlah_dewasa = ilast(&input);
    int jumlah_lansia = ilast(&input);

    printf("----------------------------------------\n");
    printf("Selamat datang di Wahana Mandi Bola!\n\n");

    printf("Silakan beli tiket terlebih dahulu untuk masuk ke wahana ini.\n\n");
    
    printf("Harga tiket:\n");
    printf("- Anak-anak (usia 0-12 tahun): Rp 10000\n");
    printf("- Dewasa (usia 13-64 tahun): Rp 20000\n");
    printf("- Lansia (usia 65 tahun ke atas): Rp 15000\n\n");

    printf("Jumlah anak: %d\n", jumlah_anak);
    printf("Jumlah dewasa: %d\n", jumlah_dewasa);
    printf("Jumlah lansia: %d\n", jumlah_lansia);
    PrintTiket(jumlah_anak, jumlah_dewasa, jumlah_lansia);
};

int HitungBiayaTiket(int jumlah_anak, int jumlah_dewasa, int jumlah_lansia) {
    return jumlah_anak*10000 + jumlah_dewasa*20000 + jumlah_lansia*15000;
};

void PrintTiket(int jumlah_anak, int jumlah_dewasa, int jumlah_lansia) {
    printf("Tiket berhasil dibeli!\n");
    printf("Rincian:\n");
    printf("- Jumlah anak-anak: %d\n", jumlah_anak);
    printf("- Jumlah dewasa: %d\n", jumlah_dewasa);
    printf("- Jumlah lansia: %d\n", jumlah_lansia);
    printf("- Total biaya: %d\n", HitungBiayaTiket(jumlah_anak, jumlah_dewasa, jumlah_lansia));
};

void HandleNimonsHunting(long input) {
    long jumlah_pergerakan = last(&input);
    long jumlah_lubang = last(&input);
    long jumlah_harta_karun = last(&input);

    printf("----------------------------------------\n");
    printf("Selamat datang di Treasure Hunting Nimons!\n\n");
    printf("Jumlah pergerakan Nimons di dalam kolam: %d\n",jumlah_pergerakan);
    printf("Jumlah lubang yang ada di kolam: %d\n", jumlah_lubang);
    printf("Jumlah harta karun yang ada di kolam: %d\n", jumlah_harta_karun);
    
    long jumlah_lubang_ditutup = 0;
    long total_harta_karun = 0;
    long total_langkah = 0;

    for (int i = 1; i <= jumlah_pergerakan; i++) {
        printf("Langkah ke-%d\n", i);

        int langkah = last(&input);
        if (langkah) printf("Nimons bergerak sejauh %d langkah\n",langkah);
        else printf("Nimons tidak bergerak\n");
        total_langkah += langkah;

        int harta = last(&input);
        if (harta) printf("Nimons menemukan harta karun!\n");
        total_harta_karun += harta;

        int lubang = last(&input);
        if (lubang) printf("Nimons menutup lubang!\n");
        jumlah_lubang_ditutup += lubang;
    }

    printf("\nTotal lubang yang ditutup: %lld dari %lld lubang\n", jumlah_lubang_ditutup, jumlah_lubang);
    printf("Total harta karun yang ditemukan: %lld\n", total_harta_karun);
    printf("Total harga harta karun yang ditemukan: %lld\n", total_harta_karun * input * 5l);
    printf("Total langkah yang ditempuh: %lld\n", total_langkah);
    printf("Total biaya ganti rugi Pak Gro: %lld\n", input * jumlah_lubang_ditutup);
    printf("Total keuntungan Nimons dan Pak Gro: %lld\n", (total_harta_karun * input * 5l) -(input * jumlah_lubang_ditutup));
};