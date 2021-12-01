#include <stdio.h>
#define MAX_SIZE 100

void inputArray(int * arr, int size);
int search(int * arr, int size, int toSearch);

int main(){
    int size, toSearch, searchIndex;
    scanf("%d", &size);
    int array[size];
    inputArray(array, size);
    scanf("%d", &toSearch);
    searchIndex = search(array, size, toSearch);
    if(searchIndex == -1){
        printf("none");
    }else{
        printf("%d position.", searchIndex + 1);
    }
    puts("");
}

void inputArray(int * arr, int size){
    int * arrEnd = (arr + size - 1);
    while(arr <= arrEnd){
        scanf("%d", arr++);
    }
}

int search(int * arr, int size, int toSearch){
    int index = 0;
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }
    if(arr <= arrEnd)
        return index;    
    return -1;
}