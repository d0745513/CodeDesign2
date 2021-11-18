#include <stdio.h>

int fun1( int n );
int isLeapYear( int y );
int fun1( int n ){
    int a = n / 4 - n / 100 + n / 400;
    return a * 366 + (n - a) * 365;
}
int isLeapYear( int y ){
    if( y % 400 == 0){
        return 1;
    }else if( y % 100 == 0){
        return 0;
    }else if( y % 4 == 0){
        return 1;
    }else{
        return 0;
    }
}


int main ( void ){
    int y, m, totalDays = 0,s = 0, x = 1, e = 0, z = 0;
    short int data[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d", &y, &m);
    printf("Su\tMO\tTU\tWE\tTH\tFR\tSA\n");
    totalDays = fun1(y-1);
    
    for(int i = 0; i < m-1; i++){
        if(isLeapYear(y) && i == 1){
            totalDays += 29;
        }else{
            totalDays += data[i];
        }
    }
    s = (totalDays+1)%7;
    if(isLeapYear(y) && m == 2){
        e = 29;
    }else{
        e = data[m-1];
    }
    for( int i = 0; i < s; i ++){
        printf("\t");
        z ++;
    }
    for( int x = 1; x <= e; x ++){
        if(z % 7 == 0){
            puts("");
        }
        printf("%2d\t", x);
        z++;
    }
    puts("");
}