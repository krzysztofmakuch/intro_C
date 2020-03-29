#include <stdio.h>
#include <stdlib.h>

void wypiszTablice(int rozmiar, int tab[])
{
	for (int i = 0; i < rozmiar; i++)
	{
		printf("%d ", tab[i]);
	}
}

void liczbyDoTablicy(int ilosc, int tablica[])
{
	for (int i = 0; i < ilosc; i++)
	{
		tablica[i] = i + 1;
	}
}


int main()
{
	//TABLICA O STALEJ WIELKOSCI:
	//inicjalizuje tablice o stalej dlugosci 
	//co gdybym ja tylko zadeklarowal?
	int tab1[100] = {0};
	int ileLiczb = 6;
	//wpisuje do tablicy tyle liczb ile chce:
	liczbyDoTablicy(ileLiczb, tab1);
	printf("Tablica o stalej dlugosci: \n");
	wypiszTablice(100, tab1);
	
	//VLA - VARIABLE LENGHT ARRAY
	printf("\nVLA - podaj ile cyfr ma byc w tablicy: ");
	scanf("%d", &ileLiczb);
	int tab2[ileLiczb];
	//zauwaz, ze ^ tylko deklaruje - dlaczego?
	liczbyDoTablicy(ileLiczb, tab2);
	wypiszTablice(ileLiczb, tab2);
	
	//DYNAMICZNA ALOKACJA PAMIECI
	//jeszcze raz zapytajmy o wielkosc tablicy
	printf("\nDynamiczna alokacja - podaj ile cyfr ma byc w tablicy: ");
	scanf("%d", &ileLiczb);
	//musimy zadeklarowac wskaznik na
	//poczatek tablicy, tutaj typu int
	int *tab3;
	//deklarujemy ile pamieci ma zajac
	//nasza tablica
	tab3 = (int*)malloc(ileLiczb * sizeof(int));
	//korzystamy podobnie jak w VLA,
	//ale mozliwosci sa duzo wieksze
	liczbyDoTablicy(ileLiczb, tab3);
	wypiszTablice(ileLiczb, tab3);
	//po zakonczonej pracy uzytkownik
	//MUSI zadbac o wyczyszczenie pamieci
	free(tab3);
	
	return 0;
}