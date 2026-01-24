# Pra Praktikum 2

Soal-soal dapat dilihat sebagai berikut. 

## [suhu.c](suhu.c)

Gro sedang melakukan eksperimen rahasia di laboratoriumnya untuk menciptakan senjata pendingin super cepat. Namun, ia menghadapi masalah: suhu yang diukur dalam berbagai satuan harus dikonversi ke satuan lain agar eksperimen berjalan dengan lancar!

Gro memanggil Nimons kesayangannya, Kebin, untuk menuliskan sebuah program yang bisa mengonversi suhu dengan cepat. Program ini harus menerima $N$ buah data, di mana setiap data terdiri dari:
* `x` : nilai suhu yang harus dikonversi
* `a` : satuan awal suhu
* `b` : satuan tujuan suhu

Nimon Kebin harus memastikan bahwa program bisa mengubah suhu dari satu satuan ke satuan lain dengan benar. Berikut daftar konversi suhu yang tersedia:

1. Celcius (C) ke Fahrenheit (F):

$$
F = C \times \frac{9}{5} + 32
$$

2. Celcius (C) ke Kelvin (K):

$$
F = C \times \frac{9}{5} + 32
$$

3. Fahrenheit (F) ke Celcius (C):

$$
F = C \times \frac{9}{5} + 32
$$

4. Fahrenheit (F) ke Kelvin (K):

$$
F = C \times \frac{9}{5} + 32
$$

5. Kelvin (K) ke Celcius (C):

$$
F = C \times \frac{9}{5} + 32
$$

6. Kelvin (K) ke Fahrenheit (F):

$$
F = C \times \frac{9}{5} + 32
$$

Notes:
1. Gunakan fungsi `floor` dari library math untuk membulatkan output.
2. Setiap hasil konversi memiliki **2 angka desimal** dan setiap output diakhiri dengan new line(`\n`).
3. Gunakan tipe data `double` untuk input dan output.
4. Gunakan rumus yang tertera di atas.

Contoh masukan dan keluaran:

### Contoh 1
#### Masukan
```
3
100 C F
32 F K
273.15 K C
```

#### Keluaran
```
212.00
273.00
0.00 
```
#### Keterangan
Konversi suhu:  
$100 \degree C \rightarrow 212 \degree F$  
$32 \degree F \rightarrow 273 K$  
$273.15 K \rightarrow 0 \degree C$  

### Contoh 2
#### Masukan
```
2
0 C K
100 C K
```

#### Keluaran
```
273.00
373.00 
```
#### Keterangan
Konversi suhu:  
$0 \degree C \rightarrow 273 F$  
$0 \degree K \rightarrow 373 K$  

### Contoh 3
#### Masukan
```
4
50 F C
300 K F
20 C F
310 K C
```

#### Keluaran
```
10.00
80.00
68.00 
36.00
```
#### Keterangan
Konversi suhu:  
$50 \degree F \rightarrow 10 \degree C$  
$300 K \rightarrow 80.33 \degree F$  
$20 \degree C \rightarrow 68 \degree F$  
$310 K \rightarrow 36.85 \degree F$  

## [MandiBola.c](MandiBola.c)

Pak Gro melihat para Nimons mulai bosan dengan kegiatan sehari-harinya. Oleh karena itu, Pak Gro memiliki ide untuk mengajak para Nimons untuk pergi ke sebuah wahana mandi bola. Karena tempat tersebut cukup berbahaya untuk para Nimons, maka Pak Gro diwajibkan untuk mengawasi para Nimons.

Para Nimons yang merupakan Pop, Kebin, dan Stewart sangat senang saat mengetahui bahwa wahana tersebut memiliki rahasia di dasarnya. Mereka membagi tugas untuk menyelidiki area dasar wahana tersebut. Ternyata ada beberapa lubang berisi bola yang tidak diketahui kedalamannya. Di dalam lubang tersebut mungkin ditemukan beberapa barang yang sangat berharga. Namun, karena jumlah lubang yang sangat banyak, para Nimons memiliki ide untuk menutup lubang-lubang tersebut.

Sesaat setelah para Nimons menemukan semua barang di dasar wahana, para Nimons langsung berlari kabur ke rumah. Pak Gro yang tidak sengaja tertidur pun akhirnya terpaksa dibangunkan oleh pemilik wahana untuk mengganti rugi bola-bola yang keluar karena lubang yang awalnya berisi bola dikosongkan dan ditutup oleh para Nimons.

Implementasikan file [**`MandiBola.c`**](MandiBola.c) dengan panduan file header [**`MandiBola.h`**](MandiBola.h).

**Tidak boleh mengubah isi file header.**

Silakan gunakan driver [berikut](driver.c) untuk menjalankan program.

**PENGGUNAAN COMPILER GCC DI TERMINAL UNTUK MENJALANKAN PROGRAM AKAN SANGAT DIPERLUKAN UNTUK PENGERJAAN PRAKTIKUM INI DAN PRAKTIKUM SELANJUTNYA (HARAP DIPELAJARI LEBIH LANJUT)**

### Contoh 1
#### Masukan

```
999
11111115015005333
```

#### Keluaran

Lihat file [`out1.txt`](out1.txt).

### Contoh 2
#### Masukan

```
234
10014112115000554
```

#### Keluaran

Lihat file [`out2.txt`](out2.txt).

**Notes:**
* Pastikan setiap output diakhiri oleh **newline (`\n`)**!
* Kumpulkan hanya file **MandiBola.c**

## [VirusNimons.c](VirusNimons.c)

Gro menghadapi masalah besar di dalam laboratoriumnya! Para Nimons tiba-tiba terjangkit oleh Virus Nimons Gila yang memiliki pola penyebaran yang unik dan berbahaya. Virus ini membuat Nimons berubah kulitnya menjadi ungu dan bersikap gila. Setelah Gro meneliti virus lebih lanjut, ia menemukan pola virus sebagai berikut:

1. Satu virus pasti akan mereplikasi diri menghasilkan **X virus baru** sekali seumur hidupnya.
2. Virus induk yang telah mereplikasi diri **tidak akan mati**, namun **tidak akan berkembang biak lagi**.
3. Virus yang baru akan mulai mereplikasi diri di **jam berikutnya**.

Gro ingin memprediksi seberapa cepat virus ini akan menyebar agar ia bisa merancang strategi untuk menghentikannya sebelum terlambat.

Sebagai asisten Gro, tugasmu adalah membuat program simulasi pertumbuhan Virus Nimons Gila dengan cara menghitung total jumlah virus pada jam ke T.

**Format Masukan:**
* Baris pertama bilangan bulat positif **N** ($1 \leq N \leq 1000$) yang menunjukkan jumlah awal virus yang terdeteksi.
* Baris kedua bilangan bulat positif **T** ($1 \leq T \leq 30$) yang menunjukkan banyaknya jam simulasi.
* Baris ketiga bilangan bulat positif **X** ($1 \leq X \leq 10$) yang menunjukkan jumlah replikasi virus baru setiap satu virus induk.

**Format Keluaran:**
* Cetak total virus pada jam ke **T**.

### Contoh 1

#### Masukan

```
1
4
2
```

#### Keluaran

```
Terdapat 31 Virus Nimons Gila pada jam ke-4
```

#### Keterangan

Jam ke-0: 1  
Jam ke-1: 3  
Jam ke-2: 7  
Jam ke-3: 15  
Jam ke-4: 31  

### Contoh 2
#### Masukan

```
4
5
3
```

#### Keluaran

```
Terdapat 1456 Virus Nimons Gila pada jam ke-5
```

#### Keterangan
Jam ke-0: 4  
Jam ke-1: 16  
Jam ke-2: 52  
Jam ke-3: 160  
Jam ke-4: 484  
Jam ke-5: 1456  

### Contoh 3
#### Masukan

```
10
3
6
```
#### Keluaran

```
Terdapat 2590 Virus Nimons Gila pada jam ke-3
```

#### Keterangan
Jam ke-0: 10  
Jam ke-1: 70  
Jam ke-2: 430  
Jam ke-3: 2590  

Pastikan setiap output diakhiri oleh **newline (`\n`)!**

**Hint:** Perhatikan tipe data yang Anda gunakan, pastikan program berjalan dengan benar memenuhi seluruh kemungkinan format input.