#include <stdio.h>

int main(void){
    int total = 0, result = 0;
	char input;
	int tmp = 0;
	char buffer;
	for(int i = 0;i < 10;i++){
		scanf("%c",&input);
		scanf("%c",&buffer);
		if(input >= '0' && input <= '9'){
			
			tmp = input - '0';
		}
		else{
			tmp = 10;
		}
		total += tmp;
		result += total;
	}
	if(result % 11) printf("NO");
	else printf("YES");
}