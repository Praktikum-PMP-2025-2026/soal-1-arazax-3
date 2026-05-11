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
    for(int i = 0; i < N; i++){
        int derajat = degree(matrix[i]);
        if (derajat == 0){
            printf("ISOLATED %d\n", i);
        }
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