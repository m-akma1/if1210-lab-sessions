#include <stdio.h>

/**
 * Fungsi untuk mengecek apakah tahun kabisat
 * Untuk tahun kelipatan 100, tahun kabisat harus habis dibagi 400
 * Untuk tahun selain kelipatan 100, tahun kabisat harus habis dibagi 4
 * @param year Tahun
 * @return Mengembalikan 1 jika tahun kabisat, 0 jika tidak
 */
int isLeapYear(int year) {
    // TODO: Implementasi fungsi isLeapYear
    if ((!(year % 4) && (year % 100)) || !(year % 400)) return 1;
    else return 0;
}

/**
 * Fungsi untuk mendapatkan jumlah hari dalam suatu bulan
 * @param month Bulan (dalam rentang 1-12)
 * @param year Tahun
 * @return Mengembalikan jumlah hari dalam bulan tersebut
 */
int getDaysInMonth(int month, int year) {
    // TODO: Implementasi fungsi getDaysInMonth
    if (month == 2) return 28 + isLeapYear(year);
    if (month <= 7) return 30 + (month % 2);
    else return 31 - (month % 2);
}

/**
 * Mengembalikan apakah tanggal valid
 * Tanggal yang valid mengikuti aturan berikut:
 * - 1 <= day <= jumlah hari dalam bulan
 * - 1 <= month <= 12
 * - year >= 1
 * @param day The day
 * @param month The month
 * @param year The year
 * @return mengembalikan 1 jika tanggal valid, 0 jika tidak
 */
int isValidDate(int day, int month, int year) {
    // TODO: Implementasi fungsi isValidDate
    if (year < 1 || month < 1 || 12 < month) return 0;
    else {
        if (day < 1 || getDaysInMonth(month, year) < day) return 0;
        else return 1;
    }
}

/**
 * Fungsi untuk menghitung jumlah hari sejak awal, yaitu day = 1, month = 1, year = 1
 * @param day Hari
 * @param month Bulan
 * @param year Tahun
 * @return Mengembalikan jumlah hari sejak awal
 */
int daysFromBeginning(int day, int month, int year) {
    // TODO: Implementasi fungsi daysFromBeginning
    for (int i = 1; i < month; i++) day += getDaysInMonth(i, year);
    year--;
    day += year*365 + year/4 - year/100 + year/400;
    return day;
}

/**
 * Fungsi untuk menghitung perbedaan hari dari dua tanggal yang valid (tanggal 2 - tanggal 1)
 * Note: input tanggal sudah valid
 * @param d1 Hari dari tanggal pertama
 * @param m1 Bulan dari tanggal pertama
 * @param y1 Tahun dari tanggal pertama
 * @param d2 Hari dari tanggal kedua
 * @param m2 Bulan dari tanggal kedua
 * @param y2 Tahun dari tanggal kedua
 * @return Mengembalikan perbedaan hari dari tanggal 2 - tanggal 1
 */
int dateDifference(int d1, int m1, int y1, int d2, int m2, int y2) {
    // TODO: Implementasi fungsi dateDifference
    return daysFromBeginning(d2, m2, y2) - daysFromBeginning(d1, m1, y1);
}

/**
 * Program utama:
 * - Menerima input d1,m1,y1
 * - Validasi tanggal pertama sampai input valid
 * - Menerima input d2,m2,y2
 * - Validasi tanggal kedua sampai input valid dan tanggal kedua lebih besar atau sama dengan dari tanggal pertama
 * - Mengeluarkan output selisih hari dari tanggal kedua - tanggal pertama
 */
int main() {
    // TODO: Implementasi program utama
    int d1, m1, y1, d2, m2, y2;
    while (1) {
        scanf("%d %d %d", &d1, &m1, &y1);
        if (isValidDate(d1, m1, y1)) break;
        printf("Tanggal tidak valid\n");
    }
    while (1) {
        scanf("%d %d %d", &d2, &m2, &y2);
        if (isValidDate(d2, m2, y2)) {
            int diff = dateDifference(d1, m1, y1, d2, m2, y2);
            if (diff < 0) {
                printf("Tanggal kedua lebih dulu\n");
                continue;
            } else {
                printf("%d\n", diff);
                break;
            }
        }
        printf("Tanggal tidak valid\n");
    }
}