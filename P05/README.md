# Praktikum 5

Lihat pra praktikum [di sini](Pra/).

Soal-soal dapat dilihat sebagai berikut.

## [matrix.c](matrix.c)

Neo-nimon (versi kuning dari Neo) menemukan dirinya terjebak dalam **Matrix** yang dibuat oleh evil Dr. Neroifa. Untuk keluar dari simulasi ini, ia harus memecahkan serangkaian teka-teki matrix. Setiap matrix yang dipecahkan membawanya semakin dekat ke **"dunia nyata"**. Sistem Matrix ini menggunakan:

- **Matrix persegi** sebagai kunci enkripsi  
- **Matrix diagonal dominan** sebagai firewall  
- **Operasi perkalian matrix** untuk memecahkan kode  
- **Matrix simetris** sebagai *"pintu keluar"* dari simulasi  

Download file header [`matrix.h`](matrix.h) dan kumpulkan implementasi berupa [`matrix.c`](matrix.c)

## [polynomial.c](polynomial.c)
Gro, si penjahat super terkenal, sedang merancang senjata baru untuk mengalahkan musuh bebuyutannya, yaitu Hector. Untuk itu, para nimons diminta untuk membantu perancangan senjata ini dengan kemampuan matematika mereka yang hebat.

Para nimons diminta untuk mengembangkan sistem matematika berbasis **polinomial** untuk mengendalikan lintasan roket, gravitasi buatan, dan dispenser pisang otomatis. Sayangnya, mereka hanya menuliskan header [`polynomial.h`](polynomial.h) dan lupa mengimplementasikannya.

Sebagai asisten jenius Gro, kamu ditugaskan untuk membantu para nimons menyelesaikan implementasi [`polynomial.c`](polynomial.c), yang berisi berbagai operasi polinomial penting untuk proyek rahasia ini. Berikut adalah header [`polynomial.h`](polynomial.h) yang digunakan dalam tugas ini.

**Note:** File yang dikumpulkan hanyalah `polynomial.c`

## [operasi.c](operasi.c)

Setelah menyelesaikan tugas sebelumnya, para **Nimons** kini ditugaskan oleh **Gro** untuk membantu sistem pemantauan kesehatan di Rumah Sakit Nimons. Stewart, sang Nimon paling pintar dan paling sabar, ditunjuk untuk membuat program pencatatan **kondisi vital pasien** dan **posisi pasien** di rumah sakit.

Tugas kamu adalah melakukan implementasi fungsi-fungsi yang terdapat pada file berikut:

**File header:** [`operasi.h`](operasi.h)

**Catatan:** File yang dikumpulkan hanya `operasi.c`

## [mtime.c](mtime.c)

Dengan memanfaatkan **ADT Time** yang telah Anda buat pada pra praktikum (silahkan gunakan implementasi yang sudah dikumpulkan pada prapraktikum), buatlah sebuah program yang digunakan untuk membaca beberapa pasangan **TIME** yang merepresentasikan waktu mulai dan waktu selesai pembicaraan telepon di suatu perusahaan penyedia layanan telepon, misalnya `<T1, T2>`. Selanjutnya untuk masing-masing pasangan, dituliskan durasi pembicaraan telepon dalam detik. Durasi pembicaraan telepon harus positif, sehingga harus diperiksa dulu manakah di antara `T1` dan `T2` yang lebih awal. Jam yang lebih awal adalah jam mulai sedangkan jam yang lebih akhir adalah jam selesai.

Selanjutnya tuliskan jam mulai pembicaraan yang paling awal yang ada dalam record dan jam selesai paling akhir yang ada dalam record. Pembacaan data dimulai dengan banyaknya pasangan data yang akan dibaca yaitu $N$. Asumsikan $N > 0$ (tidak perlu diperiksa). Untuk setiap pasangan record, ditandai dengan nomor record dalam format: `[<nomor record>]`.

### Contoh Masukan
```
3
1 0 0
3 0 0
4 0 0
2 0 0
-1 0 0
1 0 0
1 0 0
```

### Contoh Keluaran
```
[1]
7200
[2]
7200
[3]
Jam tidak valid
0
1:0:0
4:0:0
```

### Keterangan

Input ditandai dengan teks **bold**.

| **Interaksi** | **Keterangan** |
|---------------|----------------|
| **`3`** | Ada 3 record yang akan dibaca. |
| `[1]` | |
| **`1 0 0`** | |
| **`3 0 0`** | |
| `7200` | Pada record `[1]`: durasi jam `<1,0,0>` dan `<3,0,0>` adalah **7200 detik** |
| `[2]` | |
| **`4 0 0`** | |
| **`2 0 0`** | |
| `7200` | Pada record `[2]`: jam `<4,0,0>` adalah jam selesai, jam `<2,0,0>` adalah jam mulai. Durasi antara keduanya adalah **7200 detik**. |
| `[3]` | |
| **`-1 0 0`** | |
| `Jam tidak valid` | Pada record `[3]`: pembacaan jam pertama diulang 1 kali karena tidak valid. |
| **`1 0 0`** | |
| `0` | Jam pertama adalah `<1,0,0>`, jam kedua adalah `<1,0,0>` sehingga durasi antara keduanya adalah **0 detik**. |
| `1:0:0` | Setelah semua record dibaca: Jam mulai paling awal: `<1,0,0>` |
| `4:0:0` | Jam selesai paling akhir: `<4,0,0>` |

