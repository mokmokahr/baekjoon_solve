#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int year, month, date;
	int circulation;
	scanf("%d-%d-%d", &year, &month, &date);
	scanf("%d", &circulation);
	int sum = year * 360 + (month-1) * 30 + date-1;
	sum += circulation;
	year = sum / 360;
	sum = sum % 360;
	month = sum / 30+1;
	sum = sum % 30;
	date = sum+1;
	printf("%d-%02d-%02d",year,month,date);
}