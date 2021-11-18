#include <stdio.h>

int main( void ){
    int n, m, k = 0, flag = 1, count = 0; 
    scanf("%d%d", &n, &m);
    int f[n], f1[n], g[m];
    for ( int i = 0; i < n; i ++){
        scanf(" %d", &f[i]);
        f1[i] = 0;
    }
    for ( int i = 0; i < m; i ++){
        scanf(" %d", &g[i]);
    }
    
    for ( int i = 0 ; i < n; i ++){
        flag = 1;
        if( i == 0 ){
            f1[ k ]= f[ i ];
            k ++;
        }else{
            for( int x = 0; x < k; x ++){
                if( f[i] == f1[x]){
                    flag = 0;
                    break;
                }
            }
            if( flag ){
                f1[k] = f[i];
                k++;
            }
        }
        if( flag ){
            for ( int j = 0; j < m; j ++){
                if( f[i] == g[j]){
                    count ++;
                    break;
                }
            }
        }
    }
    printf("%d\n", count);
}