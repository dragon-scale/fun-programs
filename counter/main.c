#include <stdio.h>

int main(){
	int i = 0, in = 1;
	printf("to stop counting enter 0 \n");
	while (in != 0) {
		printf("%d \n", i);
		scanf("%d", &in);
		i+=in;
	}
}
