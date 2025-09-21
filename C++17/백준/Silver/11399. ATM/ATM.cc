#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n,arr[1000],sum = 0,min = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n-1; i++) {
		min = arr[i];
		for (int j = i; j < n; j++) {
			if (arr[j] < min) {
				int tmp = arr[i];
				min = arr[j];
				arr[i] = min;
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			sum += arr[j];
		}
	}
	
	printf("%d", sum);
}	