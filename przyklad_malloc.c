#include <stdio.h>
#include <stdlib.h>

/* Na poczatek chcialbym bardzo goraco zachecic do zapoznania sie 
z artykulem na angielskiej wiki: C dynamic memory allocation. Artykul
jest napisany na tyle przystepnie, ze kazdy powinien go zrozumiec. */

void wypisz_tablice( int *tab, int r)
{
	for(int i = 0; i < r; i++)
	{
		printf("%d \n", tab[i]);
	}
}

int main(void)
{
	//najpierw  zobaczmy na alternatywna metode zawolania tablicy
	int tab[] = {3,5,1};
	int r = 3;
	/* Wada tego jest, ze trudno czasami przewidziec jak dluga 
	tablice potrzeba zadeklarowac. Ponadto raz utworzona tablica 
	statyczna bedzie istniala az do konca uruchomienia programu*/
	wypisz_tablice(tab, r); 

	/* Alternatywa dla tablic statycznych sa VLA lub tablice 
	dynamiczne. Tablice dynamicznie alokowane to takie twory, 
	ktorych rozmiar podaje sie w trakcie wywolywania funkcji */
	int *arr;
	int d = 5;
	//malloc zwraca wskaznik typu void, rzutowanie typu!
	arr = (int *)malloc(d*sizeof(int));
	//powyzszy psosob jest 2-etapowy. W jednym etapie to samo:
	// int *arr = malloc(d*sizeof(int));

	wypisz_tablice( arr, d );
	free(arr);
	//int x;  
	//x=rand() % 6+1;
	printf("%d", rand());



	return 0;
}
