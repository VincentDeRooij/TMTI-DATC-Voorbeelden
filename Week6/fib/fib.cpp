// fib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

static unsigned int nFibRecursiveAcc(unsigned int n, unsigned int a, unsigned int b) {
	if (n <= 1) 
		return a;
	return nFibRecursiveAcc(n - 1, b, a + b + 1);
}

static unsigned long nFibRecursive2(unsigned int n) {
	return nFibRecursiveAcc(n, 1, 1);
}


int main(){

	//for (int i = 1; i <= 45; i++) {
	//	cout << "Id (" << i << "): " << nFibRecursive2(i) << endl;
	//}

	cout << "Id (" << 45 << "): " << nFibRecursive2(45) << endl;

	int x;
	cin >> x;
    return 0;
}

