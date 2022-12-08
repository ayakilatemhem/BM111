#include <stdio.h>
int main() {
    // odev icin son tarih: 09.12.2022 23:59
    // main fonksiyonunda degisiklik yapmayin!
    // guncelleme: 07.12.2022 18:00
    int puan = 10; // odevi gonderen herkes 10 puan alacak.
    if (ebob1(25, 90) == 5) puan += 10;
    if (ebob1(7, 200) == 1) puan += 10;
    if (ebob1(2, 256) == 2) puan += 10;
    if (ebob1(24, 39) == 3) puan += 10;
    if (ebob1(1827, 432) == 9) puan += 10;
    if (ebob1(16, 0) == 16) puan += 5;
    if (ebob1(0, 7) == 7) puan += 5;
    
    int arrayA[] = {30, 16, 27};
    int arrayB[] = {450, 200, 120, 100};
    int arrayC[] = {21, 45, 60, 72, 90};
    if (ebob2(arrayA, 3) == 1) puan += 10;
    if (ebob2(arrayB, 4) == 10) puan += 10;
    if (ebob2(arrayC, 5) == 3) puan += 10;
    
    printf("puan: %d", puan);
    return 0;
}

// verilen iki sayinin en buyuk ortak bolenini hesaplar
int ebob1(int num1, int num2) {
    // kodunuzu buraya yazin
    int ebob(int num1, int num2) {
  if (num1 < 0) num1 = -num1;
  if (num2 < 0) num2 = -num2;

  int i;
  for (i = num1 < num2 ? num1 : num2; i >= 1; i--) {
    if (num1 % i == 0 && num2 % i == 0) break;
  }

  
  return i;
}

// verilen dizideki sayilarin en buyuk ortak bolenini hesaplar
int ebob2(int numbers[], int n) {
    // kodunuzu buraya yazin
    return 0;
}
