# Praktikum 1

Lihat pra praktikum [di sini](/P01/Pra/). Soal-soal dapat dilihat sebagai berikut. 

## [AngkaPalindrom.c](AngkaPalindrom.c)

Buat program dengan nama file AngkaPalindrom.c yang meminta input satu angka $N$, lalu mengecek apakah angka tersebut **palindrom** atau tidak menggunakan **loop while**.

**Palindrom** adalah angka yang sama jika dibaca dari depan maupun belakang.

Note : Bilangan masukan merupakan bilangan tak-negatif, atau N > = 0

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
12321
```
#### Keluaran
```
1
```
#### Keterangan
1 berarti _true_ (palindrom)

### Contoh 2
#### Masukan
```
12345
```
#### Keluaran
```
0
```
#### Keterangan
0 berarti _false_ (bukan palindrom)

## [faktorprima.c](faktorprima.c)

Gro sedang merencanakan misi baru dan membutuhkan bantuan para Minions kesayangannya. Kali ini, mereka harus membuka brankas yang berisi senjata rahasia untuk melawan penjahat baru. Brankas tersebut menggunakan sistem keamanan canggih yang hanya bisa dibuka dengan mengetahui perkalian faktor prima dari angka yang tertera pada brangkas. Bantu para Minions menemukan faktorisasi prima dari angka-angka pada brankas yang mereka hadapi!

Buatlah program menggunakan bahasa c dengan nama file faktorprima.c yang menerima input satu angka N, kemudian mengeluarkan keluaran berupa **perkalian faktor prima** dari angka tersebut.

**Catatan:**
* Pastikan setiap output diakhiri oleh _endline_ ("`\n`")!

**Batasan:**
* $1 < N \leq 10^9$

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
4
```
#### Keluaran
```
2^2
```
#### Keterangan
Perkalian faktor prima dari 4 adalah 2\*2 = 2^2

### Contoh 2
#### Masukan
```
12
```
#### Keluaran
```
2^2 * 3
```
#### Keterangan
Perkalian faktor prima dari 12 adalah 2\*2\*3 = 2^2 \* 3

### Contoh 3
#### Masukan
```
20
```
#### Keluaran
```
2^2 * 5
```
#### Keterangan
Perkalian faktor prima dari 12 adalah 2\*2\*3 = 2^2 \* 5

## [pasarkaliki.c](pasarkaliki.c)

Kebin dikirim oleh Gro ke Indonesia untuk mencari buah tropis langka sebagai bahan ramuan barunya. Misi mereka membawa mereka ke Bandung, dimana mereka mendengar tentang sebuah pasar terkenal bernama Pasar Kaliki. Setibanya di Pasar Kaliki, mereka menemukan sebuah toko buah yang memajang buah-buahan dalam pola segitiga aneh. Seorang pedagang tua memberitahu mereka bahwa buah langka yang mereka cari hanya akan diberikan pada orang yang bisa menghasilkan pola segitiga Pascal dengan tepat. Bantu Kebin untuk membuat segitiga Pascal dengan jumlah baris yang diminta oleh pedagang di Pasar Kaliki (Paskal) Bandung, agar mereka bisa mendapatkan buah langka untuk Gro!

Buatlah program menggunakan bahasa C dengan nama file `pasarkaliki.c` yang menerima input satu angka $N$ yang merupakanjumlah baris segitiga pascal dan mengeluarkan output berupa pola segitiga pascal yang bersesuaian dengan jumlah baris tersebut!

**Hint:**
* Angka pada segitiga paskal mengikuti pola kombinatorika berikut:

$$
    \binom{0}{0}
$$$$
    \binom{1}{0} \quad \binom{1}{1}
$$$$
    \binom{2}{0} \quad \binom{2}{1} \quad \binom{2}{2}
$$$$
    \binom{3}{0} \quad \binom{3}{1} \quad \binom{3}{2} \quad \binom{3}{3}
$$$$
    \binom{4}{0} \quad \binom{4}{1} \quad \binom{4}{2} \quad \binom{4}{3} \quad \binom{4}{4}
$$

* Beberapa aturan kombinatorika yang berguna:

$
   \binom{n}{k} = \frac{n!}{k!(n - k)!}\\[1em]
   \binom{n}{k + 1} = \binom{n}{k} \cdot \frac{n - k}{k + 1}
$

**Catatan:**
* Pastikan setiap output diakhiri oleh _endline_ ("`\n`")!

**Batasan:**
* $1 < N \leq 10^9$

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
1
```
#### Keluaran
```
1
```
#### Keterangan
1 baris pola segitiga pascal

### Contoh 2
#### Masukan
```
2
```
#### Keluaran
```
 1
1 1
```
#### Keterangan
2 baris pola segitiga pascal

### Contoh 3
#### Masukan
```
3
```
#### Keluaran
```
  1
 1 1
1 2 1
```
#### Keterangan
3 baris pola segitiga pascal

## [BilanganSigma.c](BilanganSigma.c)

Tuan Gro, sang penjahat legendaris yang kini jadi pahlawan, memiliki sebuah perangkat rahasia yang dapat mengendalikan para minion. Perangkat ini memiliki kode utama berupa bilangan bulat positif $N$. Untuk mengaktifkan perangkat ini, pengguna harus memasukkan kode aktivasi yang merupakan **banyaknya faktor** dari $N$ yang merupakan **bilangan sigma**. Suatu bilangan disebut **sigma** jika bilangan tersebut merupakan bilangan kuadrat sempurna.
Tuan Gro membutuhkan bantuanmu untuk menemukan berapa **banyaknya pembagi $N$ yang merupakan bilangan sigma**. Jika dia salah memasukkan kode aktivasi, para minion dapat berbuat kekacauan total.

**Format Masukan:**
* Baris pertama berisi bilangan bulat positif $N (1 \leq N \leq 50000)$, yaitu kode utama yang harus dianalisis.

**Format Keluaran:**
* Cetak banyak faktor dari Nyang merupakan bilangan Sigma.

**Note:**
* **Faktor** dari bilangan N adalah bilangan bulat positif yang dapat membagi N tanpa sisa.
* **Bilangan kuadrat sempurna** adalah bilangan yang dapat dinyatakan sebagai hasil perkalian suatu bilangan bulat dengan dirinya sendiri.  
Contoh:
  - 1 = 1 x 1 → bilangan kuadrat sempurna.
  - 4 = 2 x 2 → bilangan kuadrat sempurna.
  - 10 → bukan bilangan kuadrat sempurna karena tidak ada bilangan bulat yang hasil kuadratnya sama dengan 10.
* Pastikan setiap output diakhiri oleh **endline ("`\n`")**!


Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
10
```
#### Keluaran
```
1 
```
#### Keterangan
Untuk $N = 10$, pembaginya adalah $\{1, 2, 5, 10\}$.
Faktor yang merupakan bilangan kuadrat sempurna adalah $\{1\}$ sehingga keluarannya adalah 1.

### Contoh 2
#### Masukan
```
36
```
#### Keluaran
```
4
```
#### Keterangan
Untuk $N = 36$, pembaginya adalah $\{1, 2, 3, 4, 6, 9, 12, 18,
36\}$.
Faktor yang merupakan bilangan kuadrat sempurna adalah $\{1, 4, 9, 36\}$ sehingga keluarannya adalah 4


## [baris.c](baris.c)

Di sebuah kerajaan tersembunyi, para Minion sedang bersiap untuk acara tahunan "**Parade Kejutan Gru**". Seperti biasa, mereka tidak berbaris dengan cara biasa, tetapi dengan pola unik yang hanya bisa dipahami oleh mereka sendiri.

Gru memberikan tugas kepada Kevin, pemimpin Minion, untuk mengatur barisan ini dengan aturan rahasia. Kevin, yang selalu ingin tampil pintar, berusaha menemukan pola barisan yang sempurna. la menyusun Minion dalam formasi persegi $N \times N$, tetapi nomor urutan mereka tidak seperti biasa mereka bergerak dengan cara unik yang membuat Gru bingung!

Sebagai programmer kepercayaan Gru, tugas Anda adalah membantu Kevin menghasilkan pola barisan ini untuk berbagai ukuran $N$. Jika Anda berhasil, Gru akan sangat senang, dan para Minion bisa melakukan parade dengan teratur!

**Format Masukan:**
* Satu bilangan bulat $N (0 \leq N < 100)$ yang menentukan ukuran barisan Minion $(N \times N)$.

**Format Keluaran:**
* Pola barisan Minion sesuai dengan aturan unik mereka, di mana setiap angka dipisahkan oleh satu spasi dalam setiap baris.

**Note:**
* Pastikan setiap akhir baris tidak mengandung **spasi (" ")**!
* Pastikan setiap output diakhiri oleh **endline ("`\n`")**!


Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
2
```
#### Keluaran
```
1 2
3 4
```
### Contoh 2
#### Masukan
```
3
```
#### Keluaran
```
1 2 4
3 5 7
6 8 9
```
