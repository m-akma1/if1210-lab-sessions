# Praktikum 6

Lihat pra praktikum [di sini](Pra/).

Soal-soal dapat dilihat sebagai berikut.

## [daftarlengkap.c](daftarlengkap.c)

Pagi itu, di markas rahasia Gro, para Nimons sedang sibuk mempersiapkan peralatan untuk misi baru. Dr. Neroifa mengumumkan bahwa mereka membutuhkan daftar lengkap semua senjata dan gadget untuk misi tersebut.

"Kebin dan Stewart, kalian sudah punya daftar inventaris masing-masing, bukan?" tanya Gro.

Kebin mengangguk bersemangat sambil menunjukkan daftar senjata yang sudah dia urutkan berdasarkan tingkat kerusakan dari kecil ke besar. Sementara itu, Stewart juga memperlihatkan daftar gadget miliknya yang telah diurutkan berdasarkan kodenya dari kecil ke besar.

"Bagus! Sekarang, kita butuh satu daftar lengkap yang juga terurut," perintah Gro. "Tapi jangan sampai kita membuang waktu dengan mengurutkan ulang!"

Bantulah para Nimons untuk mengimplementasikan program penggabungan dua daftar yang sudah terurut menjadi satu daftar terurut!

**Format Masukan:**
```
N
A_0 A_1 A_2 ... A_n
M
B_0 B_1 B_2 ... B_n
```
* Baris pertama sebuah integer $N$
* Baris kedua berisi elemen-elemen list pertama (sebanyak $N$ integer, sudah terurut naik)
* Baris ketiga sebuah integer $M$
* Baris keempat berisi elemen-elemen list kedua (sebanyak $M$ integer, sudah terurut naik)
* $N + M \leq 100$

**Format Keluaran:**
```
[C_0, C_1, C_2, ..., C_N+M]
```
* Hasil penggabungan terurut naik dari dua list input yang diberikan
* Jangan lupa untuk mempertimbangkan penggunaan **newline (`\n`)**!

**Notes:**
* Gunakan ADT List Statik yang sebelumnya sudah anda buat!

### Contoh 1

#### Masukan

```
5
1 3 5 7 9
4
2 4 6 8
```

#### Keluaran

```
[1, 2, 3, 4, 5, 6, 7, 8, 9]
```

#### Keterangan

Kedua daftar digabung dan tetap terurut.

### Contoh 2

#### Masukan

```
0
5
1 2 3 4 5
```

#### Keluaran

```
[1, 2, 3, 4, 5]
```

#### Keterangan

List pertama kosong, sehingga hasilnya sama dengan list kedua yang sudah terurut.

## [ManajemenGudang.c](ManajemenGudang.c)

Minions memiliki gudang penyimpanan pisang berbentuk list statik. Setiap pisang direpresentasikan dengan berat (dalam gram, bilangan bulat positif). Bantu Minions membuat program untuk mengelola daftar pisang mereka!

**Input:**
1. Program akan menerima perintah secara berulang hingga pengguna memasukkan `-1` (artinya program berhenti).
2. Ada dua jenis perintah yang dapat diberikan:
    * **`1`: Menambahkan pisang:**
        * Setelah memasukkan angka **1**, inputkan **berat** dan **indeks** pisang.
        * Format: **berat indeks**.
        * Contoh: `100 0` berarti menambahkan pisang seberat 100 gram di indeks ke-0.
    * **`0`: Menghapus pisang:**
        * Setelah memasukkan angka **0**, inputkan **indeks** pisang yang ingin dihapus.
        * Format: **indeks**.
        * Contoh: `1` berarti menghapus pisang di indeks ke-1.
3. Setiap perintah (baik insert maupun delete) akan langsung menampilkan isi gudang setelah aksi dilakukan.
4. Jika aksi tidak valid (gudang penuh, gudang kosong, atau indeks tidak valid), cetak pesan: "`Aw, gabisa ngelakuin aksi itu`" (tanpa tanda kutip).
5. Program berakhir setelah pengguna memasukkan **`-1`**.

**Output:**

* Setelah setiap aksi berhasil/gagal, cetak isi gudang dalam format list, misalnya: `[100,200,300]`.
* Pastikan setiap output diakhiri dengan **newline ("`\n`")**.

**Catatan:**

* Jika melakukan insert saat list penuh atau di indeks yang salah, aksi tidak dijalankan dan cetak "Aw, gabisa ngelakuin aksi itu".
* Jika melakukan delete di list kosong atau indeks tidak valid, aksi tidak dijalankan dan cetak "Aw, gabisa ngelakuin aksi itu".
* Format output list harus sesuai contoh: tidak ada spasi ekstra atau koma salah.

**Hint:**

* Gunakan fungsi `insertAt`, `deleteAt`, dan `printList` dari ADT List Statik.
* Jangan lupa untuk mempertimbangkan penggunaan `\n`

### Contoh 1

#### Masukan

```
1
100 0
1
200 1
0
0
1
300 1
-1
```

#### Keluaran

```
[100]
[100,200]
[200]
[200,300]
```

#### Keterangan

* Insert 100 ke indeks 0.
* Insert 200 ke indeks 1.
* Hapus pisang di indeks 0.
* Insert 300 ke indeks 1.

### Contoh 2

#### Masukan

```
0
0
-1
```

#### Keluaran

```
Aw, gabisa ngelakuin aksi itu
[]
```

#### Keterangan

* Hapus di list kosong -> aksi tidak valid.
* Catatan: meski gagal, tetap mengeluarkan output kondisi list sekarang ya.

## [patapim.c](patapim.c)

Di sebuah hutan lebat nan misterius, hiduplah sebuah makhluk yang penuh rasa penasaran. Dengan akar-akar yang kusut dan kaki bersilang, tangan kurus dan lengan yang melambai, ia menjulang tinggi ke atas. Hidungnya sepanjang daging ham, sedikit mirip babun dan semak. Nama makhluk itu ialah Patapimmo, betapa aneh!

Suatu hari, ia menemukan topi emas. "Sempurna! Penemuan yang luar biasa", serunya. Namun, di dalamnya ada Slim, si nimon kuning yang berbunyi "brrr...brrr..." tanpa alasan yang jelas. Patapim menangis, "Topiku tersayang, kini aku jadi kesal". Ia mencoba segala cara untuk mengusir Slim, tetapi nimon itu masih berada disana.

Akhirnya, Slim berjanji akan berpindah tempat jika Patapim berhasil menjawab pertanyaannya. Diberikan sebuah list  dengan panjang  yang berisi bilangan bulat positif. Carilah bilangan bulat terbesar  yang habis membagi  untuk setiap pasangan  pada  (). Dipastikan bahwa setidaknya ada satu elemen berbeda dari elemen lainnya pada .

Gunakan ADT List Dinamis yang sudah diimplementasikan pada pra-praktikum 6.

**Format Masukan:**

* Baris pertama berisi sebuah bilangan bulat positif $2 \leq n \leq 10^5$ yang mewakili banyak elemen pada list.
* Baris kedua berisi $n$ buah bilangan bulat positif $a_1, a_2, ..., a_n (1 \leq a_i \leq 10^9)$ yang merupakan elemen dari list.

**Format Keluaran:**

* Keluarkan sebuah bilangan bulat  yang merupakan jawaban dari pertanyaan Slim.
* Pastikan setiap output diakhiri oleh **newline ("`\n`")**!

**Notes:**

* Jika membutuhkan fungsi GCD, berikut adalah pseudocode-nya:

```pascal
function GCD(a: integer, b: integer) -> integer
ALGORITMA:
    if b = 0:
        -> a
    else:
        -> GCD(b, a mod b)
```

### Contoh 1

#### Masukan

```
5
1 2 3 4 5
```

#### Keluaran

```
1
```

### Contoh 2

#### Masukan

```
3
10 20 30
```

#### Keluaran

```
10
```

# [pencarian.c](pencarian.c)

> Soal tidak diarsipkan