#include<stdio.h>
int main() {
	int num, i, j;
	
	printf("Enter number : ");
	scanf_s("%d", &num);
	if (num > 2&&num<=60) {
		int x = num, y = num;
		for (i = 1; i <= num; i++) {
			for (j = 1; j < num * 2; j++) {
				if (j == x || j == y) {
					printf("*");

				}
				else {
					printf(" ");
				}

			}
			x--;
			y++;
			printf("\n");
		}

		for (i = 1; i <= num; i++) {
			for (j = 1; j <= (2 * num) - 1; j++) {
				if (i == 1 || i == num || j == 1 || j == (2 * num) - 1) {
					printf("*");
				}
				else {
					printf(" ");
				}

			}
			printf("\n");
		}

	}
	else {
		printf("Sorry..please try again...");
	}


	return 0;

}