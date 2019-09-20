#include<stdio.h>
int main(){
	int i = 10;
	int j = 20;
	printf("%d %d\n", i, j);
	i = i + j;
	j = i - j;
	i = i - j;
	printf("%d %d\n", i, j);
	system("pause");
	return 0;
}