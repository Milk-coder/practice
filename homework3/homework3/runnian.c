#include<stdio.h>
int main(){
	int i = 1000;
	int count = 0;
	while (i <= 2000){
		if (i % 4 == 0){
			if (i % 100!= 0){
				printf("%d ", i);
			}
			count++;
		}
		if (i % 400 == 0){
			printf("%d ", i);
		}
		i++;
	}
	system("pause");
	return 0;
}