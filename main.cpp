#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototype.h"
#define N 100000

int main() {
	int sum = 0;
	int idx;
	float tmp;
	srand(time(NULL));
	int arr[10] = { 0 };
	for (int k = 0; k < N; k++)
	{
		idx = random();
		arr[idx]++;
	}
	for (int i = 0; i < 10; i++) {
		tmp = arr[i];
		printf("%f\trange: %d - %d\n", (tmp / N), i, (i + 1));
	}
	return 0;
}