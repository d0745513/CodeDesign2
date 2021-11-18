#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void sortArray( short int arr[] );
void sortArray( short int arr[] ){
	int i = 0;
	int j = 0;
    for(i = 0; i< SIZE; i++){
        for (j = i+1; j < SIZE; j ++){
            if ( arr[i] > arr[j]){
                short int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main ( void ){
    short int data[ SIZE ], flag;
    int n = 0, i = 0, j = 0;
    scanf("%d", &n);
    srand(n);
    while (i < SIZE){
        flag = 1;
        j = 0;
        data[i]=rand() % 42 +1;
        while ( flag && j < i){
            if (data[i] == data[j]){
                flag = 0;
                break;
            }
            j++;
        }
        i++;
    }
    sortArray(data);
    for( i = 0; i < SIZE; i++){
        printf("%-4d", data[i]);
    }
    puts("");   
}
