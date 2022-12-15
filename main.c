#include <stdio.h>

int main() {
	int macierz[3][3];
	int x, z;
	for (x = 0; x < 3; x++) {
		for (z = 0; z < 3; z++) {
			scanf("%d", &macierz[x][z]);
		}
	}
	return 0;
}

