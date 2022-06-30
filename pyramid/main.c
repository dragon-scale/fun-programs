#include <stdio.h>

int main(){
	int layers,width,in;
	printf("how tall do you want your pyramid?:");
	scanf("%d", &in);
	for (layers=0;layers<in;layers++) {
		for(width=0;width<in;width++) {
			if (width<in-layers-1) {
				printf(" ");
			} else {
			       printf("* ");	
			}

		}
		printf("\n");
	}
}
