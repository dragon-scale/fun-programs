#include <stdio.h>

int main(){
	int i,j,n;
	printf("how tall do you want your pyramid?:");
	scanf("%d", &n);
	for (i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (j<n-i-1) {
				printf(" ");
			} else {
			       printf("* ");	
			}

		}
		printf("\n");
	}
}
