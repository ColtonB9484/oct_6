#include <stdio.h>
#include <stdarg.h>
#include "shopping.h"


int main(void) {
	double price = 100.0;
	double discount = .10;

	printf("Price before apply_tax: %.2f\n", price);
	apply_tax(price);
	printf("Price After apply_tax: %.2f\n", price);

	printf("Price before apply_discount: %.2f\n", price);
	if(apply_discount(&price, .10) == 0) {
		apply_discount(&price, discount);
	} else {
		printf("Discount Failed");
	}
	printf("Price after apply_discount: %.2f\n", price);

	printf("Total = $%.2f\n", calculate_total(3, 10.00, 20.00, 30.00));
	printf("Total = $%.2f\n", calculate_total(5, 5.00, 10.00, 15.00, 20.00, 25.00));
	
	

	return 0;
}
