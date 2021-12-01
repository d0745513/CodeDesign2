#include <stdio.h>
#include <string.h>
#define SIZE 40
void changePosition(char *ch1, char *ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void charPermu(char *cht, int stno, int endno){
   int i;
   if (stno == endno){
       printf("%s ", cht);
   }else{
       for (i = stno; i <= endno; i++){
          changePosition((cht+stno), (cht+i));
          charPermu(cht, stno+1, endno);
          changePosition((cht+stno), (cht+i)); 
       }
   }
}
 
int main(){
    char str[SIZE];
    scanf("%s", str);
    int n = strlen(str);
    charPermu(str, 0, n-1);
    printf("\n");
    return 0;
}