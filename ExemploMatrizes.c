#include <stdio.h> //Printf
#define TAM_COL 5
#define TAM_ROW 10

int main(){
    int matrix[TAM_ROW][TAM_COL] = {
                            {1, 2, 3, 4, 5},
                            {2, 3, 2, 1, 4},
                            {1, 2, 3, 3, 1},
                            {2, 3, 1, 3, 2},
                            {1, 2, 3, 4, 5},
                            {2, 3, 2, 1, 4},
                            {1, 2, 3, 3, 1},
                            {2, 3, 1, 3, 2},
                            {1, 2, 3, 4, 5},
                            {2, 3, 2, 1, 4},
                        };

    printf("Valores row %d e  col %d \n\n", TAM_ROW, TAM_COL);

    for(int i = 0; i < TAM_ROW; i++ ){
        printf("Linha: %d\n", i);
        for(int j = 0; j < TAM_COL; j++ ){
            printf("%d \t", matrix[i][j]);
        }
    }

    return 0;
}