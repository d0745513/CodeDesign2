#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(){
	int n = 0,tmp = 0;
	int input[SIZE] = {0};
	int sum[SIZE] = {0};
	int buffer = 0;
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++){
		scanf("%d",&input[i]);
		tmp = input[i];
		while(tmp > 0){
			sum[i] += tmp % 10;
			tmp /= 10;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			if(sum[i] > sum[j]){
				buffer = sum[j];
				sum[j] = sum[i];
				sum[i] = buffer;
				tmp = input[i];
				input[i] = input[j];
				input[j] = tmp;
			}
			else if(sum[i] == sum[j]){
				if(input[i] > input[j]){
					buffer = sum[j];
					sum[j] = sum[i];
					sum[i] = buffer;
					tmp = input[i];
					input[i] = input[j];
					input[j] = tmp;
				}
			}
		}
	}
	for(int i = 0;i < n;i++){
		printf("%d ",input[i]);
	}
	
}