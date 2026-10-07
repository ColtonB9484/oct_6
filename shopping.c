#include <stdio.h>
#include <stdarg.h>
#include "shopping.h"

void apply_tax(double price) {
	price = price - (price * .07);
	printf("Price with Tax: %.2f\n", price);
}

int applyDiscount(double *price, double percent_off) {
	if(price == NULL || *price < 0.0 || percent_off < 0.0) {
		return DISCOUNT_FAIL;
	}
	
	*price = price - (price * percent_off);
	return DISCOUNT_OK;
}

double calculate_total(int n, ...) {
	va_list arguments;
	double total = 0.0;
	
	va_start(arguments, n);

	for(int i = 0; i < n; i++) {
		int current = va_arg(arguments, double);
		total += current;
	}

	va_end(arguments);

	return total;
}
