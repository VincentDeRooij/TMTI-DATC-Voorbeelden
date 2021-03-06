// OpenMP_fib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <omp.h>
#include <iostream>

using namespace std;


long long fib(long long n) {
	if (n < 2) {
		return 1;
	}
	return fib(n - 2) + fib(n - 1);
}

int main() {

	long long n = 0;

	// Set number of threads same as number of cores
	omp_set_num_threads(omp_get_num_procs());

#pragma omp parallel private(n)
	{
#pragma omp for schedule(dynamic, 1)
		for (n = 0; n <= 45; n++) {
			printf("Fib(%lld): %lld\n", n, fib(n));
		}

	}

	int x;
	cin >> x;
    return 0;
}

