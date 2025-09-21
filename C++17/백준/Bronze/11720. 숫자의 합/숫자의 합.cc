#include <stdio.h>
int main() {
	int a,z,sum = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		scanf("%1d", &z);
		sum += z;
		z = 0;
	}
	printf("%d", sum);
}