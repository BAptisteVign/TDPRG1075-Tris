#pragma once

void swap(int* a, int* b);

int initRandTab(int* tab, int tabsize);

void displayPartTab(int* tab, int tabsize, int begin, int end);

int triBulle(int* tab, int tabsize);
int triBulleOpt(int* tab, int tabsize); 
int triNaif(int* tab, int tabsize); 

void dispTabInt(int* tab, int tabsize);


int TriSelection(int* tab, int tabsize);
int TriInsertionSequentiel(int* tab, int tabsize);
int rang(int* tab, int indmin, int indmax, int valeur);

int TriInsertionDichotomique(int* tab, int tabsize);
