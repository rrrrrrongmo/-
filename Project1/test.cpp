#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "euclid.h"


void test()
{
	clock_t start, end;
	double result;

	start = clock();

	srand((unsigned int)time(NULL));

	int a = (rand() % 1000)+1;
	int b = (rand() % 1000)+1;

	printf("a = %d, b = %d\n", a, b);

	printf("반복문 = %d\n", eucliditeration(a, b));
	printf("재귀함수 = %d\n", euclidrecursive(a, b));

	end = clock();
	result = (double)(end - start);

	printf("걸린시간 = %f", result);
}