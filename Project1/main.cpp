#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "euclid.h"

int main(void)
{
	clock_t start, end;
	double result;

	start = clock(); //시작시간

	srand((unsigned int)time(NULL));

	int a = (rand() % 1000) + 1;
	int b = (rand() % 1000) + 1;
	//임의의 수

	printf("a = %d, b = %d\n", a, b);

	printf("반복문 = %d\n", eucliditeration(a, b));

	printf("재귀함수 = %d\n", euclidrecursive(a, b));

	end = clock(); //종료시간

	result = (double)(end - start); //걸린시간

	printf("걸린시간 = %f", result);
}