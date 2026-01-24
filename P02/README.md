# Praktikum 2

Lihat pra praktikum [di sini](Pra/).

Soal-soal dapat dilihat sebagai berikut.

## [MisiKebin.c](MisiKebin.c)

Kebin diberikan sebuah misi dari Gro, yaitu membuat program untuk mencari banyak bilangan prima di antara dua bilangan. Sebenarnya, ini adalah misi yang mudah bagi Kebin karena ia sudah memahami konsep bilangan prima setelah belajar dengan Stewart. Namun, Gro memberikan program awal yang harus dipatuhi oleh Kebin. Sayangnya, program yang diberikan memiliki struktur prosedur yang kurang tepat.

**Program awal yang diberikan oleh Gro:**  
[`MisiKebin.c`](MisiKebin.c)

**Tugas Anda:**  
Perbaiki dan selesaikan program yang diberikan oleh Gro agar dapat berfungsi dengan benar.

**Format Masukan:**
* Program akan menerima dua integer $A$ dan $B$ dalam satu baris, dipisahkan oleh spasi.
* Batasan nilai: $1 \leq A \leq B \leq 10000$

**Format Keluaran:**
Program harus mencetak satu bilangan bulat yang merupakan jumlah bilangan prima dalam rentang $[A, B]$ **diakhiri dengan newline (`\n`)**

### Contoh 1
#### Masukan
```
10 20
```

#### Keluaran
```
4
```

#### Keterangan
Bilangan Prima antara 10 dan 20 adalah 11, 13, 17, dan 19, total ada 4.

### Contoh 2
#### Masukan
```
2 10
```

#### Keluaran
```
4
```

#### Keterangan
Bilangan prima antara 2 dan 10 adalah 2, 3, 5, dan 7, total ada 4.

## [PestaPisang.c](PestaPisang.c)

Di kerajaan Minion, "Gro" sedang mempersiapkan sebuah pesta besar untuk para "Nimons". Untuk memastikan pesta tersebut sukses, Gro memerintahkan **lima** Nimons andal, yaitu "Kebin", "Stewart", "Pop", "Boby", dan "Toto", untuk mengumpulkan pisang sebagai bahan pesta. Setiap Nimons mengumpulkan pisang dengan jumlah yang berbeda. Gro ingin mengetahui apakah jumlah pisang yang terkumpul cukup untuk membuat pesta tersebut sukses.

**Aturan Pesta:**
* **Total Pisang:** Gro harus mengetahui jumlah pisang yang dikumpulkan oleh semua Nimons.
* **Rata-rata Pisang per Nimon:** Jika rata-rata pisang per Nimon **minimal 10**, maka pesta dianggap sukses. Jika kurang dari itu, pesta dianggap gagal.

Buatlah program dalam bahasa C yang menyelesaikan permasalahan di atas dengan ketentuan fungsi/prosedur yang telah ditentukan (Fungsi Utama, Fungsi Hitung Total, Fungsi Hitung Rata-rata, dan Prosedur Tampilkan Pesan).

**Format Masukan:**
* Menerima input sebanyak **LIMA** kali yang mendefinisikan jumlah pisang yang dikumpulkan masing-masing Nimon.

**Format Keluaran:**
* Baris pertama: Total pisang yang terkumpul.
* Baris kedua: Rata-rata pisang (dalam format floating point).
* Baris ketiga: Pesan status pesta ("Pesta Nimons Sukses!" atau "Pesta Nimons Gagal, kumpulkan lebih banyak pisang!").
* Pastikan setiap output diakhiri oleh **newline (`\n`)**.

### Contoh 1
#### Masukan

```
12
8
15
10
5
```

#### Keluaran

```
50
10.000000
Pesta Nimons Sukses!
```

#### Keterangan
Total $50 = 12 + 8 + 15 + 10 + 5$. Rata-rata $10.00 = 50 / 5$. Karena rata-rata $\geq 10$, maka cetak "Pesta Nimons Sukses!".

## [misibesar.c](misibesar.c)

Gru, pemimpin para Nimons, sedang merencanakan misi pencurian terbesar sepanjang sejarah. Dia menugaskan Kebin, Stewart, dan Pop untuk mempersiapkan segala keperluan misi. Pop ditugaskan untuk menghitung hari yang tersisa sebelum hari H misi tersebut. Gru memberikan Pop sebuah kalender dan menandai dua tanggal penting: tanggal persiapan dimulai (d1/m1/y1) dan tanggal pelaksanaan misi (d2/m2/y2). Karena Pop tidak pandai menghitung, dia meminta bantuan untuk membuat fungsi yang dapat menghitung berapa selisih hari antara dua tanggal tersebut.

**Catatan:**
* Pastikan setiap output diakhiri oleh **newline (`\n`)**.

### Contoh 1
#### Masukan

```
0 0 0
111 222 333
20 3 2023
0 0 0
333 222 111
10 3 2023
15 3 2023
31 3 2023
```
#### Keluaran

```
Tanggal tidak valid
Tanggal tidak valid
Tanggal tidak valid
Tanggal tidak valid
Tanggal tidak valid
Tanggal kedua lebih dulu
Tanggal kedua lebih dulu
11
```
#### Keterangan

| Masukan | Keterangan |
|---|---|
| 0 0 0 | Tanggal tidak valid |
| 111 222 333 | Tanggal tidak valid |
| 20 3 2023 | Tanggal valid |
| 0 0 0 | Tanggal tidak valid |
| 333 222 111 | Tanggal tidak valid |
| 10 3 2023 | Lebih dahulu dari pada 20 3 2023 |
| 15 3 2023 | Lebih dahulu dari pada 20 3 2023 |
| 31 3 2023 | Selisih antara 20 3 2023 dan 31 3 2023 adalah 11 hari |


### Contoh 2
#### Masukan

```
15 1 1984
15 1 1617
16 12 1984
```
#### Keluaran

```
Tanggal kedua lebih dulu
336
```
#### Keterangan
| Masukan | Keterangan |
|---|---|
| 15 1 1984 | Tanggal valid |
| 15 1 1617 | Lebih dahulu dari pada 15 1 1984 |
| 16 12 1984 | Selisih antara 15 1 1984 dan 16 12 1984 adalah 336 hari |


### Contoh 3
#### Masukan

```
15 7 2023
27 7 2023
```
#### Keluaran

```
12
```

#### Keterangan
Selisih antara 15 7 2023 dan 27 7 2023 adalah 12 hari

## [misibesar.c](misibesar.c)
_Tulis ringkasan singkat di sini._

### Contoh 1
#### Masukan
```
```
#### Keluaran
```
```
#### Keterangan
_Tulis keterangan di sini._

<!-- Format Contoh I/O Lainnya sama seperti di atas -->

## [MisiRahasia.c](MisiRahasia.c)

Gro dan pasukan Nimons sedang menjalankan misi rahasia untuk mendapatkan **kristal energi super langka** yang tersembunyi di dalam laboratorium bawah tanah milik **Ordo Gelap**. Untuk mencapai kristal ini, mereka harus memecahkan berbagai teka-teki matematika berbasis **tanggal**.

Program harus dapat melakukan operasi berikut:

- Memeriksa apakah suatu tanggal valid
- Menghitung hari dalam seminggu berdasarkan tanggal tertentu
- Menentukan zodiak berdasarkan tanggal lahir Gro
- Menghitung selisih hari antara dua tanggal
- Menentukan hari pasaran Jawa dari sebuah tanggal

Jika kamu berhasil menyelesaikan semua tantangan ini, Nimons bisa sampai ke kristal energi dan mengalahkan Ordo Gelap!

**Format Masukan:**
- Program akan membaca beberapa perintah dalam format berikut:
  - `VALIDASI D M Y` → Memeriksa apakah tanggal (D, M, Y) valid atau tidak.
  - `HARI D M Y` → Mengembalikan hari dalam seminggu untuk tanggal (D, M, Y).
  - `ZODIAK D M` → Menentukan zodiak dari tanggal (D, M).
  - `SELISIH D1 M1 Y1 D2 M2 Y2` → Menghitung selisih hari antara dua tanggal.
  - `PASARAN D M Y` → Mengembalikan hari pasaran Jawa untuk tanggal (D, M, Y).
- Program berhenti saat menerima perintah `SELESAI`.

**Format Keluaran:**
- Untuk perintah **VALIDASI**, cetak `YA` jika tanggal valid, `TIDAK` jika tidak.
- Untuk perintah **HARI**, cetak nama hari dalam bahasa Indonesia (**Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu**).
- Untuk perintah **ZODIAK**, cetak nama zodiak yang sesuai.
- Untuk perintah **SELISIH**, cetak jumlah hari antara dua tanggal.
- Untuk perintah **PASARAN**, cetak nama hari pasaran Jawa (**Legi, Pahing, Pon, Wage, Kliwon**).

**Batasan:**
* Untuk input `D M Y` dalam rentang $1 \leq D \leq 31 ; 1 \leq M \leq 12 ; 1 \leq Y \leq 9999$
* Input dijamin valid untuk perintah selain **VALIDASI**.


### Contoh 1
#### Masukan

```
VALIDASI 29 2 2023
HARI 17 8 1945
ZODIAK 12 3
SELISIH 1 1 2000 1 1 2024
PASARAN 1 1 2000
SELESAI
```

#### Keluaran

```
TIDAK
Jumat
Pisces
8766
Legi
```

#### Keterangan
**VALIDASI 29 2 2023** → Tahun 2023 bukan kabisat, sehingga Februari hanya memiliki 28 hari → **TIDAK**  
**HARI 17 8 1945** → 17 Agustus 1945 jatuh pada hari **Jumat**  
**ZODIAK 12 3** → 12 Maret masuk dalam rentang **Pisces** → **Pisces**  
**SELISIH 1 1 2000 1 1 2024** → Selisih antara 1 Januari 2000 dan 1 Januari 2024 adalah **8766 hari**  
**PASARAN 1 1 2000** → 1 Januari 2000 jatuh pada **Legi**  

**Notes:**
- Hari dalam seminggu dihitung menggunakan **Zeller's Congruence**.
- Hari pasaran Jawa dihitung berdasarkan **siklus 5 hari** dari tanggal yang diberikan.
- Tahun kabisat ditentukan dengan aturan berikut:
  - Jika tahun habis dibagi **400**, maka **kabisat**.
  - Jika tahun habis dibagi **100** tetapi tidak **400**, maka **bukan kabisat**.
  - Jika tahun habis dibagi **4**, maka **kabisat**.
- Pastikan setiap akhir baris **tidak mengandung spasi** (` `).
- Pastikan setiap output diakhiri oleh **endline** (`\n`).

## [TekaTeki.c](TekaTeki.c)

Tuan Gro sedang bosan dan memutuskan untuk menguji kecerdasan para nimons dengan teka-teki berikut:

> "Diberikan N buah pasang tanda kurung `(` dan `)`, berapakah banyak cara untuk menyusunnya sehingga setiap tanda kurung terbuka selalu memiliki pasangannya yang tertutup secara benar?"

Nimon-nimon mulai berpikir keras. Mereka mencoba menyusun beberapa kombinasi tanda kurung tetapi segera menyadari bahwa tidak semua susunan valid. Para nimon yang penasaran segera berlari ke Dr. Neroifa untuk meminta bantuan. Setelah mengamati teka-teki tersebut, Dr. Neroifa langsung berkata:

> "Ah, ini mudah! Jawabannya adalah **bilangan Catalan ke-n**."

Sayangnya, para nimon tidak tahu apa itu bilangan Catalan. Untuk itu, mereka meminta Anda untuk membuat fungsi-fungsi berikut:

1. `kombinasi(n, k)` → Fungsi untuk menghitung kombinasi $\binom{n}{k}$.  
2. `catalan(n)` → Fungsi untuk menghitung **bilangan Catalan ke-n**.

Implementasikan file **[`TekaTeki.c`](TekaTeki.c)** menggunakan panduan pada file header **[`TekaTeki.h`](TekaTeki.h)**.

**Batasan:**
* Untuk fungsi `catalan(n)`, $n$ berupa bilangan bulat ($1 \leq n \leq 14$).
* Untuk fungsi `kombinasi(n, k)`, $n$ dan $k$ berupa bilangan bulat positif ($1 \leq n, k \leq 28$).

**Hint:**
Rumus untuk menghitung bilangan Catalan ke-n adalah:
$$C_n = \frac{1}{n+1} \binom{2n}{n}$$
Dimana $\binom{n}{k}$ adalah kombinasi binomial:
$$\binom{n}{k} = \frac{n!}{k!(n-k)!}$$

* Gunakan tipe data `long long` untuk proses perhitungan.
* Setiap fungsi **harus** memiliki nama, tipe data masukan, dan keluaran yang sama dengan header.
