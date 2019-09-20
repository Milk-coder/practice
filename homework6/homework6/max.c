#include<stdio.h>
int main(){
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int max = arr[0];
	int i = 0;
	for (i = 0; i < 9; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0; 
}