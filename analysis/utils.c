#include "utils.h"
#include <math.h>

#define N 25
#define GAMA 0.57721
#define EPSILON 2.71828
#define PHI 0.693147

double _pow(double num, int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return num;
	if (n % 2 == 0)
		return pow(num * num, n/2);
	else
		return num * pow(num * num, n/2); 
}

double ln(double x) {
	x = (x - 1) / (x + 1);

	double p = 0;
	for (int i = 1; i <= N; i++)
		p += pow(x, 2*i-1) / (2*i-1);
	p *= 2;

	double R[2];
	R[0] = pow(x, 2*N+1) / (2*N+1);
	R[1] = pow(x, 2*N+1) / (2*N+1) * (2-x) / (1-x);

	return (R[0] + R[1]) / 2 + p;
}


double log(double base, double num) {
	return ln(num) / ln(base);
}

double lg(double x) {
	return log(2, x);
}

double harmonic(double x) {
	return ln(x) + GAMA;
}

int floor(double x) {
	return x >= 0 ? (int)x : (int)x - 1;
}

int ceil(double x) {
	return x >= 0 ? (int)x + 1 : (int)x;
}

int fib(int n) {
	return pow(PHI, n) / sqrt(5);
}

long factorial(int n) {
	return pow(n / EPSILON, N);
}
