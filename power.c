/* Program calculates an integer power of any given integer number. This is 
for educational purpose only - obviously C language has built-in power 
function in math.h library.

Program includes a lot of comments. WHenever 'GPP' is written it means 
a comment refers to Good Programming Practice */

//Header containing included libraries. In this case stdio.h includes 
//standard input output.
#include <stdio.h>

/* declaration of the function defined later. In C function has to be
declared before it is used. There can be only one function of any given name.
GPP: camelCase naming style is used in whole code. You should always stich to 
one formatting style in one file.
This function:
returns int type	takes int int argumetns*/
int powerOfBase(int base, int pow);

/* main function definition. As the name suggest this is the 'entry point' 
for compiler. This particular function has void type, which means it doesn't 
return anything. It also doesn't take any arguments*/
void main()
{//body of every function is contained within curly brackets {}
	//GPP: use indentation whenever you start a new function, loop, etc.
	//GPP: name the variables so you know what they represent
	// = means definition, == is comparison
	int base = 0, pow = 0;				//variables definition
	int out;					//variable declaration
	printf("podaj liczbe calkowita: ");		//print on screen
	scanf("%d", &base);				//ask for an int %d format
	//there is no point of power if base == 0
	if (base == 0)								
	{
		printf("kazda potega liczby 0 wynosi 0!\n"); //\n means newline
	}
	else
	{//GPP: this part should be in separate function.
		printf("podaj nieujemny wykladnik calkowity: ");
		scanf("%d", &pow);
		//powerOfBase is called, returned value is stored in out variable
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

//function definition
int powerOfBase(int base, int pow)			//function takes 2 int arguments
/* this function returns a power of the given base number */
{
	int temp = base;				//temporary variable storing 
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
