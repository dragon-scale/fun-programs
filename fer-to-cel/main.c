#include <stdio.h>
#include <unistd.h>

int main() {
	int fahr, cels;
	int lower, upper, step;

	fahr = 0;
	while (fahr <= 400) {
		cels = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, cels);
		fahr = fahr + 10;
		sleep(1);
	}
}
