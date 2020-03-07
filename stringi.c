#include <stdio.h>

int main()
{
	char nazwa[20];
	char nazwa2[20];
	int dlugosc = 0;
	//sprobujmy wczytac nazwe miast scanf'em - poponuje dwa slowa np. Wielka Wies
	printf("Podaj nazwe jakiegos miasta: ");
	scanf("%s", nazwa);	//zwroc uwage, ze nie ma & przed zmienna
	dlugosc = sizeof(nazwa)/sizeof(char);
	printf("%s to bardzo ladne miejsce, a sama nazwa ma %d znakow.\n", nazwa, dlugosc);
	
	//scanf zostawia biale znaki i reszte w buforze standard input, trzeba cos z tym zrobic:
	fgets(nazwa, sizeof(nazwa), stdin); //uzwyamy fgets do wczytania reszty z stdin
	
	//teraz uzyjmy fgets do wczytania tej samej nazwy
	printf("\nJeszcze raz podaj nazwe jakiegos miasta: ");
	fgets(nazwa2, sizeof(nazwa2), stdin);
	printf("Miasto, ktore podales wypisane printf: %s", nazwa2);
	//mozna tez wypisac inaczej:
	printf("Miasto ktore podales wypisane puts: ");
	puts(nazwa2);
	
	return 0;
}
