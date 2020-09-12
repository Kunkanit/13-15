#include<stdio.h>
int main() {
	int n, r, sum = 0;
	printf("Enter number :");
	scanf_s("%d", &n);
	if (n >= 0) {
		while (n > 9) {
			sum = 0;
			while (n > 0) {
				r = n % 10;
				n = n / 10;
				sum = sum + r;

			}

			n = sum;

		}

		printf("%d", n);
	}
	else {
		printf("wrong number see u nextime...");
	}
	return 0;


}
