#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "polynomial.h"

/* Konstruktor */
void CreatePolynomial(Polynomial *p)
{
    for (int i = 0; i <= MAX_DEGREE; i++)
        p->coeff[i] = 0;
    p->degree = 0;
}
/**
 * I.S. -
 * F.S. Terbentuk polynomial p dengan semua koefisien diinisialisasi dengan 0.0
 * dan degree juga diinisialisasi dengan 0
 */

void CreatePolynomialFromArray(Polynomial *p, int coeffArray[], int size)
{
    CreatePolynomial(p);
    for (int i = 0; i < size; i++)
        p->coeff[i] = coeffArray[i];

    p->degree = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (coeffArray[i] != 0)
        {
            p->degree = i;
            break;
        }
    }
}
/**
 * I.S. CoeffArray adalah array of coefficients yang terdefinisi,
 * size adalah ukuran dari coeffArray yang terdefinisi
 * F.S. Terbentuk polynomial p dengan semua koefisien diinisialisasi berdasarkan coeffArray
 * dan degree diinisialisasikan dengan index tertinggi dari elemen coeffArray yang tidak nol
 */

/* Selektor */
int GetCoefficient(Polynomial *p, int exponent)
{
    if (exponent > MAX_DEGREE)
        return 0;
    return p->coeff[exponent];
}
/**
 * Mengembalikan nilai koefisien pada suku dengan eksponen = exponent
 */

int GetDegree(Polynomial *p)
{
    for (int i = MAX_DEGREE; i >= 0; i--)
    {
        if (p->coeff[i] != 0)
        {
            return i;
        }
    }
    return 0;
    // return p->degree;
}
/**
 * Mengembalikan derajat tertinggi dari polynomial dengan koefisien tak nol
 */

int Evaluate(Polynomial *p, int x)
{
    int sum = 0, xi = 1;
    for (int i = 0; i <= p->degree; i++)
    {
        sum += p->coeff[i] * xi;
        xi *= x;
    }
    return sum;
}
/**
 * Mengembalikan hasil evaluasi polynomial p dengan masukan x
 * Contoh:
 * p = 3x^2 + 3x + 1
 * Evaluate(p, 1) = 3(1^2) + 3(1) + 1 = 7
 */

/* Mutator */
void SetCoefficient(Polynomial *p, int exponent, int coefficient)
{
    if (exponent > MAX_DEGREE)
        return;
    p->coeff[exponent] = coefficient;
    if (coefficient != 0 && exponent > p->degree) p->degree = exponent;
    // for (int i = MAX_DEGREE; i >= 0; i--)
    // {
    //     if (p->coeff[i] != 0)
    //     {
    //         p->degree = i;
    //         break;
    //     }
    // }
}

/**
 * I.S. Polynomial p, exponent, dan coefficient terdefinisi
 * F.S. Polynomial p diupdate dengan koefisien baru (coefficient)
 * pada suku dengan eksponen yang diberikan (exponent)
 */

/* Operasi Baca/Tulis */
void ReadPolynomial(Polynomial *p)
{
    //    int s; scanf("%d", &s);
    //    int coeff[s + 1];
    //    for (int i = 0; i <= s; i++) scanf("%d", coeff + i);
    //    CreatePolynomialFromArray(p, coeff, s + 1);
    int size;
    scanf("%d", &size);
    CreatePolynomial(p);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &(p->coeff[i]));
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (p->coeff[i] != 0)
        {
            p->degree = i;
            break;
        }
    }
}
/**
 * I.S. Polynomial p belum terdefinisi
 * F.S. Polynomial p terdefinisi dan diisi dengan nilai-nilai yang dibaca dari input
 * - Meminta input size yang merupakan banyak koefisien yang akan dimasukkan (dari koefisien 0)
 * - Meminta input koefisien sebanyak size dan menginisialisasi p berdasarkan nilai ini (dari koefisien 0)
 */

/* Operator Aritmatika */
void AddPolynomials(Polynomial *p1, Polynomial *p2, Polynomial *result)
{
    CreatePolynomial(result);
    int maxDegree = (p1->degree > p2->degree) ? p1->degree : p2->degree;
    result->degree = maxDegree;
    for (int i = 0; i <= maxDegree; i++)
        result->coeff[i] = p1->coeff[i] + p2->coeff[i];
    //    for (int i = MAX_DEGREE; i >= 0; i--) {
    //        if (result->coeff[i] != 0) {
    //         result->degree = i;
    //         break;
    //        }
    //     }
}
/**
 * I.S. Polynomial p1 dan p2 terdefinisi
 * F.S. Hasil penjumlahan p1 dan p2 (p1 + p2) disimpan di polynomial result
 */

void SubtractPolynomials(Polynomial *p1, Polynomial *p2, Polynomial *result)
{
    CreatePolynomial(result);
    int maxDegree = (p1->degree > p2->degree) ? p1->degree : p2->degree;
    result->degree = maxDegree;
    for (int i = 0; i <= maxDegree; i++)
        result->coeff[i] = p1->coeff[i] - p2->coeff[i];
    // for (int i = MAX_DEGREE; i >= 0; i--) {
    //     if (result->coeff[i] != 0) {
    //      result->degree = i;
    //      break;
    //     }
    //  }
}
/**
 * I.S. Polynomial p1 dan p2 terdefinisi
 * F.S. Hasil pengurangan p1 dan p2 (p1 - p2) disimpan di polynomial result
 */

int IsEqual(Polynomial *p1, Polynomial *p2)
{
    if (GetDegree(p1) != GetDegree(p2))
        return 0;
    for (int i = 0; i <= p1->degree; i++)
    {
        if (p1->coeff[i] != p2->coeff[i])
            return 0;
    }
    return 1;
}
/**
 * I.S. Polynomial p1 dan p2 terdefinisi
 * F.S. Mengembalikan 1 jika kedua polynomial adalah sama, dan 0 jika sebaliknya
 * Dua polynomial dianggap sama jika keduanya memiliki derajat yang sama dan semua koefisiennya bernilai sama
 */

/* Operasi Lain */
void PrintPolynomial(Polynomial *p)
{
    // switch (p->coeff[p->degree]) {
    // case 0:
    //     break;
    // case 1:
    //     switch (p->degree) {
    //     case 0:
    //         printf("1");
    //         break;
    //     case 1:
    //         printf("x");
    //         break;
    //     default:
    //         printf("x^%d", p->degree);
    //         break;
    //     }
    //     break;
    // case -1:
    //     switch (p->degree) {
    //     case 0:
    //         printf("-1");
    //         break;
    //     case 1:
    //         printf("-x");
    //         break;
    //     default:
    //         printf("-x^%d", p->degree);
    //         break;
    //     }
    //     break;
    // default:
    //     printf("%dx^%d", p->coeff[p->degree], p->degree);
    //     break;
    // }

    // for (int i = p->degree - 1; i >= 0; i--) {
    //     if (p->coeff[i] == 0) continue;
    //     switch (i) {
    //     case 0:
    //         if (p->coeff[i] > 0) printf(" + %d", p->coeff[i]);
    //         else printf(" - %d", abs(p->coeff[i]));
    //         break;
    //     case 1:
    //         switch(p->coeff[i]) {
    //             case 1:
    //                 printf(" + x");
    //                 break;
    //             case -1:
    //                 printf(" - x");
    //                 break;
    //             default:
    //                 if (p->coeff[i] > 0) printf(" + %dx", p->coeff[i]);
    //                 else printf(" - %dx", abs(p->coeff[i]));
    //                 break;
    //             }
    //         break;
    //     default:
    //     switch(p->coeff[i]) {
    //         case 1:
    //             printf(" + x^%d", i);
    //             break;
    //         case -1:
    //             printf(" - x^%d", i);
    //             break;
    //         default:
    //             if (p->coeff[i] > 0) printf(" + %dx^%d", p->coeff[i], i);
    //             else printf(" - %dx^%d", abs(p->coeff[i]), i);
    //             break;
    //         }
    //         break;
    //     }
    // }
    // printf("\n");

    int first = 1;
    for (int i = p->degree; i >= 0; i--)
    {
        int c = p->coeff[i];
        if (c != 0)
        {
            if (!first)
            {
                if (c > 0)
                    printf(" + ");
                else
                    printf(" - ");
            }
            else
            {
                if (c < 0)
                    printf("-");
                first = 0;
            }
            int abs_c = abs(c);
            if (i == 0)
            {
                printf("%d", abs_c);
            }
            else if (i == 1)
            {
                if (abs_c == 1)
                    printf("x");
                else
                    printf("%dx", abs_c);
            }
            else
            {
                if (abs_c == 1)
                    printf("x^%d", i);
                else
                    printf("%dx^%d", abs_c, i);
            }
        }
    }
    printf("\n");
}
/**
 * I.S. P terdefinisi
 * F.S. Polynomial p ditampilkan dengan aturan sebagai berikut:
 * - Elemen ditampilkan dari derajat paling tinggi ke derajat paling rendah
 * - Hanya tampilkan elemen dengan koefisien tak nol
 * - Untuk suku derajat tertinggi (pertama ditampilkan) dengan koefisien positif, tidak perlu berikan tanda + di depan
 * - Untuk suku derajat tertinggi (pertama ditampilkan) dengan koefisien negatif, tidak perlu berikan spasi antara tanda - dan suku (-x^n)
 * - Untuk suku yang bukan derajat tertinggi, tampilkan tanda + dan - dengan diberikan spasi (x^3 + 6x)
 * - Untuk koefisien 1, hanya tampilkan x^n (bukan 1x^n), kecuali untuk suku konstan
 * - Untuk koefisien -1, hanya tampilkan -x^n atau - x^n (bukan -1x^n dan - 1x^n), kecuali untuk suku konstan
 * - Untuk suku derajat 1, tampilkan x (bukan x^1)
 * - Untuk suku derajat 0, tampilkan koefisiennya saja
 * - Berikan newline (\n) di akhir baris
 * Contoh: -4x^3 + 3x^2 - 2x + 1
 */
