#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototype.h"
int random() {
	int tmp = 0;
	float num = ((float)(rand()) / (RAND_MAX)) * 10;
	tmp = (int)num;
	if (tmp == 10) {
		tmp = random();
	}
	return tmp;
}