#include <stdio.h>

int main() {
	int macierz[3][3];
	int x, z;
	for (x = 0; x < 3; x++) {
		for (z = 0; z < 3; z++) {
			scanf("%d", &macierz[x][z]);
		}
	}
	printf("Macierz z podanych liczb \n");
	for (x = 0; x < 3; x++) {
		for (z = 0; z < 3; z++) {
			printf("%d ", macierz[x][z]);
		}
		printf("\n");
	}
	return 0;
}

