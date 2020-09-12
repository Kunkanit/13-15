#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char str[100], t;
	char *p = str;
	int i, j,k;

	printf("Enter word : ");
	scanf("%s",str);

	k = (strlen(str));
	
	for (i = 0; i < k - 1; i++) {

		for (j = i + 1; j <= k - 1; j++) {

			if (*(p + i) > * (p + j)) {
				t = *(p + i);
				*(p + i)=* (p + j);
				*(p + j)=t;
			}
		}

	}

	printf("Sort by character: %s", str);

	
	return 0;
}