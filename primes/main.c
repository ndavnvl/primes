#include <stdio.h>
#include <math.h>

int main() {
	unsigned int MaxNum = 0;
	int NumOfDiv = 0;
	printf("This programm searches all prime numbers.\n");
	for (int cont = 1; cont;) {
		printf("Please, input number which limits range, above 0.\n");
		scanf_s("%u", &MaxNum);
		for (unsigned int i = 1; i < MaxNum; i++) {
			for (unsigned int j = 1; j <= (int)sqrt((double)i); j++) {
				if (!(i % j)) {
					NumOfDiv++;
				}
			}
			if (NumOfDiv <= 1) {
				printf("%d\n", i);
			}
			NumOfDiv = 0;
		}
		printf("If you want to input new range input 1, else input 0\n");
		scanf_s("%d", &cont);
	}
	return 0;
}