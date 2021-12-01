#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[101] = {0};
	int lowerCount[26] = {0};
	int upperCount[26] = {0};
	int word = 0;
	gets(input);
	for(int i = 0;i < strlen(input);i++){
		if(input[i] >= 'a' && input[i] <= 'z'){
			lowerCount[input[i] - 'a']++;
		}
		else if(input[i] >= 'A' && input[i] <= 'Z'){
			upperCount[input[i] - 'A']++;
		}
		else{
			word++;
		}
	}
	printf("%d\n",word + 1);

	for(int i = 0;i < 26;i++){
		if(lowerCount[i] != 0) printf("%c=%d\n",'a' + i,lowerCount[i]);
	}
	for(int i = 0;i < 26;i++){
		if(upperCount[i] != 0) printf("%c=%d\n",'A' + i,upperCount[i]);
	}
}