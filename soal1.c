/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5
 *   Hari dan Tanggal    : Sening, 11 Mei 2026
 *   Nama (NIM)          : Afdhal Razaq (13224004)
 *   Nama File           : soal2.c
 *   Deskripsi           : Menentukan derajat tiap node dari graph, node yang terisolasi, serta node dengan derajat maksimum
 * 
 */

#include <stdio.h>
int N;

int degree(int *matrix){
    int count = 0;
    for(int i = 0;i<N;i++){
        if(matrix[i] == 1){
            count += 1;
        }
    }
    return count;
}

void hasil(int matrix[][N]){
    int max = 0;
    int idxmax = 0;
    for(int i = 0; i < N; i++){
        int derajat = degree(matrix[i]);
        printf("DEGREE %d %d\n", i, derajat);
        if(derajat > max){
            max = derajat;
            idxmax = i;
        }
    }
    printf("MAX_VERTEX %d\n", idxmax);
    int flag = 0;
    for(int i = 0; i < N; i++){
        int derajat = degree(matrix[i]);
        if (derajat == 0){
            printf("ISOLATED %d\n", i);
            flag = 1;
        }
    }
    if (flag == 0){
        printf("ISOLATED NONE\n");
    }
}

int main(){
     
    scanf("%d", &N);
    int matrix[N][N];

    for(int i = 0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    hasil(matrix);

}