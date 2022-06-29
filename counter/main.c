#include <stdio.h>

int main(){
	int i, j;
	i = 1;
	j = 1;
	while (i!=0) {
		printf("%d \n", j);
		printf("do you want to keep counting? \n to stop counting put 0 \n");
		scanf("%d", &i);
		j = j+i;
	}
}
