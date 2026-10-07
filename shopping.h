#ifndef SHOPPING_H
#define SHOPPING_H


//Error Codes
#define DISCOUNT_OK 0
#define DISCOUNT_FAIL -1

void apply_tax(double price);
int apply_discount(double *price, double percent_off);
double calculate_total(int n, ...);

#endif
