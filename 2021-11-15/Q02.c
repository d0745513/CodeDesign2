#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n, m, seed;
    scanf("%d%d%d", &n, &m, &seed);
    int data[n][m];
    srand(seed);
    for( int i = 0; i < n; i ++){
        for( int j = 0; j < m; j ++){
            data[i][j] = rand() % 100 + 1;
            printf("%4d\t", data[i][j]);
        }
        puts("");
    }
    puts("--------------------");
    for( int i = 0; i < m; i ++){
        for( int j = 0; j < n; j ++){
            printf("%4d\t", data[j][i]);
        }
        puts("");
    }
}