#include <stdio.h>
int main(){
	int i = 100;
	int count = 0;
	while (i <= 200){
		int j = 2;
		while (j <= i){
			if (i % j == 0){
				break;
			}
			j++;
		}
		if (j == i){
			count++;
		printf("%d ", i);
		}
			i++;
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
}
