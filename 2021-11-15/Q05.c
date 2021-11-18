#include <stdio.h>

int main ( void ){
    int n1, m1, n2, m2, p = 0 , q = 0; 
    scanf("%d%d%d%d", &n1, &m1, &n2, &m2);
    int a[n1][m1], b[n2][m2], c[n1][m2];
    for(int i = 0; i < n1; i++){
        for(int j = 0 ; j < m1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n2; i++){
        for(int j = 0 ; j < m2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0;i < n1; i++){
        for( int j = 0 ; j < m2; j ++){
            c[i][j] = 0;
        }
    }
    for(int i = 0; i < n1; i++){
        for ( int k = 0; k < m2 ; k++){
            for(int j = 0 ; j < m1; j++){
                c[p][q] += a[i][j] * b[j][k];
            }
            q++;
        }
        p++;
        q = 0;
    }
    for(int i = 0;i < n1; i++){
        for( int j = 0 ; j < m2; j ++){
            printf("%4d\t", c[i][j]);
        }
        puts("");
    }
}