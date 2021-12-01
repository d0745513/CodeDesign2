#include<stdio.h>
#include<stdlib.h>
int main(){
	char al[27] = {"ABCDEFGHJKLMNPQRSTUVXYWZIO"};
	char input[11];
	scanf("%s",input);
	int tmp, x1, x2;
	for(int i = 0;i < 26;i++){
		if(input[0] == al[i]){
			tmp = i + 10;
			x1 = tmp / 10;
			x2 = tmp % 10 * 9;
			break;
		}
	}

	int total = 0;
	total = x1 + x2;
	for(int i = 1;i < 10;i++){
		if(i == 9) total += 1 * (input[i] - '0');
		else total += (9 - i) * (input[i] - '0');
	}
	//printf("%d",total);
	if(total % 10) printf("WRONG!!!");
	else printf("CORRECT!!!");
}