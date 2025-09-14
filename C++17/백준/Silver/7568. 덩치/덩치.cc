#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n,height[10000],weight[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &weight[i], &height[i]);
	}

	for (int i = 0; i < n; i++) {
		int order = 1;
		for (int j = 0; j < n; j++) {
			if (weight[j] > weight[i] && height[j] > height[i]) {	
				order++;
			}
		}
		printf("%d ", order);
	}

	return 0;
	}