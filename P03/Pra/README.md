# Pra Praktikum 3

Soal-soal dapat dilihat sebagai berikut.

## [rotasikekuatan.c](rotasikekuatan.c)

Dr. Neroifa meminta bantuan untuk melakukan beberapa rotasi pada pasukan Nimons. Setiap kali Dr. Neroifa memberikan sebuah nilai k, kamu harus memutar barisan Nimons ke kanan sebanyak k langkah, mencatat posisi barisan Nimons yang baru, lalu mengembalikan barisan tersebut ke susunan semula. Setelah itu, Dr. Neroifa kembali memberikan k baru, dan kamu harus mengulangi proses yang sama.

**Deskripsi Singkat:**
* Terdapat sebuah array integer yang mewakili posisi atau kekuatan Nimons dalam barisan.
* Kita juga mendapatkan list berisi beberapa nilai k.
* Untuk setiap nilai k dalam list tersebut
    1. Rotasikan array ke kanan sebanyak k langkah.
    2. Cetak (atau catat) hasil rotasi tersebut.
    3. Kembalikan barisan Nimons ke kondisi semula.

**Note:**
* Masukan pertama merupakan jumlah elemen dalam barisan Nimons
* Masukan kedua merupakan jumlah rotasi yang akan dilakukan
* Masukan ketiga merupakan barisan Nimons
* Masukan keempat merupakan barisan rotasi
* Pastikan output diakhiri oleh **newline (`\n`)**!

### Contoh 1
#### Masukan

```
4
3
1 2 3 4
1 2 5
```

#### Keluaran

```
[4, 1, 2, 3]
[3, 4, 1, 2]
[4, 1, 2, 3]
```

#### Keterangan
rotasi 1 langkah : `[1, 2, 3, 4] -> [4, 1, 2, 3]`  
rotasi 2 langkah : `[1, 2, 3, 4] -> [3, 4, 1, 2]`  
rotasi 5 langkah : `[1, 2, 3, 4] -> [4, 1, 2, 3]`  

## [arrayutils.c](arrayutils.c)
Lengkapilah file header berikut dan kumpulkan dengan nama **arrayutils.c**.

[`arrayutils.h`](arrayutils.h)


## [barisan.c](barisan.c)

Para Nimons sedang belajar baris-berbaris. Gro membuat sebuah lomba agar para Nimons lebih mahir dalam baris berbaris. Lomba ini dilakukan dengan berbaris berdasarkan nomor id dari tiap Nimons. Skor dari barisan Nimons ditentukan dengan mengalikan FPB dan KPK dari semua id Nimons yang sedang berbaris. Tetapi ada Nimons yang punya skill invinsibility sehingga bisa menghilangkan dirinya sendiri dari barisan dan akan memengaruhi skor. Hitunglah Skor Barisan yang mungkin untuk sebuah barisan Nimons dengan paling banyak menghilangkan 1 Nimons!

**Input:**
```
N
A0 A1 A2 ... Ai
```

**Output:**
```
M
```

**Batasan:**
- $N$: banyak Nimons di barisan, $0 \leq N < 1000$  
- $A_i$: id dari Nimons ke i

**Catatan:**
- FPB dan KPK dari array 1 elemen adalah nilai elemen itu sendiri
- Skor untuk array 0 elemen adalah 0
- Bisa menghilangkan 1 Nimons dari barisan, bisa juga tidak sama sekali

### Contoh 1
#### Masukan

```
4
2 4 8 16
```

#### Keluaran

```
64
```

#### Keterangan

Nimons pertama jadi invisible  
$\text{FPB} ([4, 8, 16]) = 4$  
$\text{KPK} ([4, 8, 16]) = 16$  
$16 \times 4 = 64$  

### Contoh 2
#### Masukan

```
5
1 2 3 4 5
```

#### Keluaran

```
60
```

#### Keterangan

Tidak ada Nimons yang perlu menjadi invisible  
$\text{FPB} ([1, 2, 3, 4, 5]) = 1$  
$\text{KPK} ([1, 2, 3, 4, 5]) = 60$  
$60 \times 1 = 60$  

### Contoh 3
#### Masukan

```
1
3
```

#### Keluaran

```
9
```

#### Keterangan

$\text{FPB} ([3]) = 3$  
$\text{KPK} ([3]) = 3$  
$3 \times 3 = 9$  
