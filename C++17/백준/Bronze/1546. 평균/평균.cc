#include <stdio.h>
int main() {
	float a,score,hscore = 0,sum = 0;
	float z;
	scanf("%f", &a);
	for (int i = 1; i <= a; i++) {
		scanf("%f",&score);
		if (hscore < score) {
			hscore = score;
		}
		sum += score;
		score = 0;
	}
	z = (sum * 100) / (hscore * a);
	printf("%f", z);
}