#include <stdio.h>

#define BASIC_RATE 10.0
#define OVERTIME_HOURS 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.20
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

float cal_gross_pay (float hours);
float cal_taxes (float gross_pay);

int main() {

	float hours,gross_pay,taxes;

	if (scanf("%f",&hours) == 1)
	{
		gross_pay = cal_gross_pay(hours);
		taxes = cal_taxes(gross_pay);

		printf("%0.2f %0.2f %0.2f\n",gross_pay,taxes,(gross_pay-taxes));
	}
	return 0;
}

float cal_gross_pay (float hours)
{
	if (hours > OVERTIME_HOURS)
		return OVERTIME_HOURS * BASIC_RATE + (hours - OVERTIME_HOURS) * BASIC_RATE * OVERTIME_MULTIPLIER;
	else
		return hours * BASIC_RATE;
}

float cal_taxes (float gross_pay)
{
	if (gross_pay > TAX_BRACKET_2)
		return TAX_RATE_3 * (gross_pay - TAX_BRACKET_2) + TAX_RATE_2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
	else if (gross_pay > TAX_BRACKET_1)
		return TAX_RATE_2 * (gross_pay -TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
	else
		return TAX_RATE_1 * gross_pay;
}
