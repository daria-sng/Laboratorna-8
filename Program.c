#include <stdio.h> 
#include <stdlib.h>
#define N 4
#define M 5

int main(){
    system ("chcp 65001");
    float array_A[N][M] = 
    { 1.0, 4.12, -6.3, 8.2, 1.3,
    -4.1, 9.7, 20.45, -11.56, 5.5,
    7.7, -1.25, 7.3, -8.9, 54.32, 
    14.2, 8.78, -5.34, 20.45, -18.21
    };

    float array_B[N][M] =
    { 16.45, -23.11, 9.87, -34.56, 11.09,  
    -7.25, 18.90, 21.19, 6.13, 15.67,  
    -29.34, 3.21, -17.89, 8.45, -24.68,  
    5.76, -12.44, 30.10, 21.19, -14.38
    };

    float array_subtraction[N][M];
    int i, j;

    for(i=0; i<N; i+=1){
        for(j=0; j<M; j+=1){
            array_subtraction[i][j] = array_A[i][j] - array_B[i][j];
        }
    }

    puts("Результат віднімання двох матриць ( А і В ):");
    for(i=0; i<N; i+=1){
        for(j=0; j<M; j+=1){
            printf("%.2f ", array_subtraction[i][j]);
        }
        printf("\n");
    }

    float max_negative = -100.0;
    for(i=0; i<N; i+=1){
        for(j=0; j<M; j+=1){
            if(array_subtraction[i][j] > max_negative && array_subtraction[i][j] < 0){
                max_negative = array_subtraction[i][j];
            }
        }
    }

    printf("\nНайбільший серед від'ємних елемент: %.2f\n", max_negative);
    
    for(i=0; i<N; i+=1){
        for(j=0; j<M; j+=1){
            if(array_subtraction[i][j] == max_negative){
                printf("Індекси :\n%d %d\n", i, j); 
            }
        }
    }
        return 0;
}