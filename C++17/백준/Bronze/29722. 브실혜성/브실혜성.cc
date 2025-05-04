#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int year, month, date;
	int circulation;
	scanf("%d-%d-%d", &year, &month, &date);
	scanf("%d", &circulation);
	int date_ = (date + circulation) % 30;
	int month_ = ((date + circulation-1) / 30 + month) % 12;
	int year_ = year + ((date + circulation-1) / 30 + month-1) / 12;
	if (!date_) date_ = 30;
	if (!month_) month_ = 12;
	printf("%d-%02d-%02d", year_, month_, date_);
}