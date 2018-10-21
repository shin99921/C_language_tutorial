#include <stdio.h>

#define a 2.05
#define b 1.15
#define c 1.09

#define S5LB 6.50
#define S20LB 14.00
#define SOV20LB 0.5

#define DIS 0.05

float cal(float weight);

int main() {
	
	int loop,n,i=0;
	float aweight=0,bweight=0,cweight=0,total_weight;
	float aprice,bprice,cprice,subtotal,discount,shipping,total;
	float weight;
	char option;
	
	scanf("%d",&loop);
	
	while (i<loop)
	{
		scanf("%c %d",&option,&n);
		
		switch (option)
		{
			case ('a') :
				aweight += n;
				i++;
				break;
			
			case ('b') :
				bweight += n;
				i++;
				break;
				
			case ('c') :
				cweight += n;
				i++;
				break;
		}
	}
	
	aprice = aweight*a;
	bprice = bweight*b;
	cprice = cweight*c;
	subtotal = aprice+bprice+cprice;
	
	if (subtotal >= 100.0)
	{
		discount = (DIS*subtotal);
	}
	else
	{
		discount = 0;
	}
	
	total_weight = aweight+bweight+cweight;
	shipping = cal(total_weight);
	
	total = subtotal+shipping-discount;
	
	printf("%0.2f\n",total);
	
	return 0;
}

float cal(float weight)
{
	if (weight < 5.0)
		return S5LB;
	else if (weight < 20.0)
		return S20LB;
	else
		return 10+S20LB+SOV20LB*(weight - 20.0);
}

