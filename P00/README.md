# Praktikum 0

Soal-soal dapat dilihat sebagai berikut. 

## [hello.c](hello.c)

Buatlah sebuah program yang dapat menampilkan "**Hello, World!**"!

Note:
* Tanda petik dua tidak perlu ditampilkan pada output.
* Tambahkan _newline_ pada bagian akhir.

## [luaslingkaran.c](luaslingkaran.c)

Buatlah program dalam bahasa C yang menerima masukan sebuah bilangan _real_ (float) $r$ yang merepresentasikan jari-jari sebuah lingkaran (asumsikan $r > 0$), dan menghasilkan luas lingkaran berdasarkan rumus: luas = 3.1415 * r * r.

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
2
```
#### Keluaran
```
12.566000
```
#### Keterangan
3.1415 * 2 * 2

### Contoh 2
#### Masukan
```
3.5
```
#### Keluaran
```
38.483376
```
#### Keterangan
3.1415 * 3.5 * 3.5

## [penjumlahan.c](penjumlahan.c)

Buatlah program dalam bahasa C yang menerima masukan tiga buah bilangan _real_ (float) dan menghasilkan hasil penjumlahan dari tiga buah bilangan tersebut.

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
2
3
4
```
#### Keluaran
```
9.000000
```
#### Keterangan
2 + 3 + 4

### Contoh 2
#### Masukan
```
10
-4
99
```
#### Keluaran
```
105.000000
```
#### Keterangan
10 - 4 + 99

### Contoh 3
#### Masukan
```
1.123
-1.234
9.543
```
#### Keluaran
```
9.432000
```
#### Keterangan
1.123 - 1.234 + 9.543

## [lamawaktu.c](lamawaktu.c)

Buatlah program dalam bahasa C yang menerima masukan 2 buah waktu dalam format "HH MM SS" di mana input pertama adalah waktu awal dan input waktu kedua adalah waktu akhir. Program tersebut dapat menghitung perbedaan waktu antara waktu awal dan waktu akhir.

Note: 
* Waktu akhir pasti lebih besar dari waktu awal (dalam 1 hari yang sama)
* Setiap komponen waktu (jam, menit, detik) akhir pasti lebih besar dari komponen waktu awal

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
9 0 0
12 12 12
```
#### Keluaran
```
3 12 12 
```
#### Keterangan
12 - 9 = 3  
12 - 0 = 0  
12 - 0 = 0  

### Contoh 2
#### Masukan
```
0 0 0
1 2 3
```
#### Keluaran
```
1 2 3
```
#### Keterangan
1 - 0 = 1  
2 - 0 = 2  
3 - 0 = 3  

## [jaraktempuh.c](jaraktempuh.c)

Buatlah program dalam bahasa C yang menerima masukan 1 buah bilangan _real_ (float) $v$ yang merepresentasikan kecepatan sebuah mobil berjalan (km/h) dan 1 buah bilangan _integer_ $t$ yang merepresentasikan lama mobil berjalan (h). Program dapat menghasilkan jarak yang ditempuh mobil berdasarkan rumus: jarak = v * t.

Note:
* asumsikan v, t > 0
* keluaran dalam bentuk real dengan 2 angka di belakang koma (gunakan `%.2f`)

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
2
2
```
#### Keluaran
```
4.00
```
#### Keterangan
2 * 2

### Contoh 2
#### Masukan
```
3.5
3
```
#### Keluaran
```
10.50
```
#### Keterangan
3.5 * 3
