#include <stdio.h>

int powerOfBase(int base, int pow);

int main()
{
	int base = 0, pow = 0;						//variables definition
	int out;									//variable declaration
	printf("podaj liczbe calkowita: ");			//print on screen
	scanf("%d", &base);							//ask for an int - %d format
	if (base == 0)								
	{
		printf("kazda potega liczby 0 wynosi 0!\n");	//\n means newline
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
	return 0;
}

int powerOfBase(int base, int pow)			//function takes two int arguments
/* this function returns a power of the given base number */
{
	int temp = base;						//temporary variable storing 
											//multiplication result
	if (pow > 0)
	{
		for (int i = 1; i < pow; i++)
		{
			temp = temp * base;
		}
		return temp;
	}
	else if (pow == 0)
	/* NOTE! there are no logical values in C! 0 and 1 are int type */
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}