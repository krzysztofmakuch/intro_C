#include <stdio.h>

float powerOfBase(float base, int pow);

void main()
{
	int base = 0, pow = 0;
	int out;
	printf("podaj liczbe calkowita: ");
	scanf("%d", &base);
	if (base == 0)
	{
		printf("kazda potega liczby 0 wynosi 0!\n");
	}
	else
	{
		printf("podaj nieujemny wykladnik calkowity: ");
		scanf("%d", &pow);
		out = powerOfBase(base, pow);
		if (out != 0)
		{
			printf("potega %d liczby %d wynosi %d\n", pow, base, out);
		}
		else
		{
			printf("wykladnik musi byc nieujemny!\n");
		}
	}
	
}


float powerOfBase(float base, int pow)
{
	int temp = base;
	if (pow > 0)
	{
		for (int i = 1; i < pow; i++)
		{
			temp = temp * base;
		}
		return temp;
	}
	else if (pow == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}