#include <stdlib.h>
#include "tris.h"
#include <stdio.h>


/// <summary>
/// Fonction qui permet d'échanger deux valeurs de type int
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
void swap(int* a, int* b) {
	int ret; 
	ret = *a; 
	*a = *b; 
	*b = ret;

}

/// <summary>
///  Fonction qui permet d'initialiser un tableau avec des valeurs aléatoires
/// </summary>
/// <param name="tab"></param>
/// <param name="tabsize"></param>
/// <returns></returns>
int initRandTab(int* tab, int tabsize){

	for (int i = 0; i < tabsize; i++) {
		tab[i] = rand() % 1000;  
	}
	return EXIT_SUCCESS; 
}

/// <summary>
/// Fonction qui permet d'afficher un tableau
/// </summary>
/// <param name="tab"> nom du tableau </param>
/// <param name="tabsize"> Nombre max de valeurs dans le tableau </param>
/// <param name="begin">indice de la première valeur à afficher </param>
/// <param name="end">indide de la dernière valeur à afficher </param>
void displayPartTab(int* tab, int tabsize, int begin, int end) {
	if (begin < 0 || end >= tabsize || begin > end) {
		printf("Indices invalides\n");
		return;
	}

	for (int i = begin; i <= end; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}


int triNaif(int* tab, int tabsize) {
	for (int i = 0; i < tabsize - 1; i++) {
		for (int j = i + 1; j < tabsize; j++) {
			if (*(tab + i) > *(tab + j)) {
				swap(tab + i, tab + j); 
			
			}
		}
	}
	return EXIT_SUCCESS;
}


int triBulle(int* tab, int tabsize) {
	for (int i = 0; i < tabsize - 1; i++) {
		for (int j = 0; j < tabsize - 1 - i; j++) {
			if (*(tab + j) > *(tab + j + 1)) {
				swap(tab + j, tab + j + 1); 
			}
		}
	}
	return 0;
}

int triBulleOpt(int* tab, int tabsize) {
	for (int i = 0; i < tabsize - 1; i++) {
		int swapped = 0;  // Volant pour savoir si un échange a eu lieu
		for (int j = 0; j < tabsize - 1 - i; j++) {
			if (*(tab + j) > *(tab + j + 1)) {
				swap(tab + j, tab + j + 1); // Utilisation de pointeurs pour l'échange
				swapped = 1; // Marquer qu'il y a eu un échange
			}
		}
		// Si aucun échange n'a eu lieu, le tableau est déjà trié
		if (!swapped) {
			break;
		}
	}
	return 0;  // 0 indique un tri effectué sans problème
}


int TriSelection(int* tab, int tabsize) {
	for (int i = 0; i < tabsize - 1; i++) {
		int* minPtr = tab + i;
		for (int j = i + 1; j < tabsize; j++) {
			if (*(tab + j) < *minPtr) {
				minPtr = tab + j;
			}
		}
		if (minPtr != tab + i) {
			swap(minPtr, (tab + i)); 
		}
	}
	return EXIT_SUCCESS;
}

int TriInsertionSequentiel(int* tab, int tabsize) {
	for (int i = 1; i < tabsize; i++) {
		int key = *(tab + i);
		int* j = tab + i - 1;
		while (j >= tab && *j > key) {
			*(j + 1) = *j;
			j--;
		}
		*(j + 1) = key;
	}
	return EXIT_SUCCESS;
}

int rang(int* tab, int indmin, int indmax, int valeur) {
	while (indmin <= indmax) {
		int mid = (indmin + indmax) / 2;
		if (*(tab + mid) == valeur)
			return mid;
		else if (*(tab + mid) < valeur)
			indmin = mid + 1;
		else
			indmax = mid - 1;
	}
	return indmin;
}

int TriInsertionDichotomique(int* tab, int tabsize) {
	for (int i = 1; i < tabsize; i++) {
		int key = *(tab + i);
		int pos = rang(tab, 0, i - 1, key);
		int* j = tab + i;
		while (j > tab + pos) {
			*j = *(j - 1);
			j--;
		}
		*j = key;
	}
	return EXIT_SUCCESS;
}


void dispTabInt(int* tab, int tabsize) {
	printf("\n");
	for (int i = 0; i < tabsize; i++)
		printf("%05d ", *(tab + i));
	//printf("\n");
}

