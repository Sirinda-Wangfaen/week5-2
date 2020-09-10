#include<stdio.h>
#include<math.h>
 
int main() {
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	if (a >= 0 && b >= 0) {
		printf("%.6lf", sqrt((a * a) + (b * b)));
	}
	else {
		printf("Error");
	}

	return 0;
}