/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : 13 April 2026
 *   Nama (NIM)          : Michelle (13224098)
 *   Nama File           : soal2.c
 *   Deskripsi           : Menentukan apakah seseorang pantas memasuki sebuah area terlarang
 *                          berdasarkan apakah berizin, nilai radiasi mereka, nilai suhu tubuh, dan jam masuk.
 * 
 */

#include<stdio.h>

int status(int izin, int suhu, int radiasi, int jam ){
    if(radiasi>=6){ printf("TOLAK");}
    else if (suhu>=390) {printf("KARANTINA");}
    else if (izin==1&&(jam<6||jam>20)) { printf("TOLAK");}
    else if (izin==1){ printf("MASUK");}
    else if (izin==2 && radiasi<=2 && (jam>=8&&jam<=18)) {printf("MASUK");}
    else if (izin==2){ printf("PEMERIKSAAN\n");}
    else if(izin==3&&radiasi==0&&(jam>=8&&jam<=18)) {printf ("MASUK");}
    else { printf("TOLAK");}
}
int main (){
    int izin, radiasi, jam;
    int suhu;
    printf("masukkan nilai izin suhu radiasi jam\n");
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    status(izin, suhu, radiasi, jam);
    
}
