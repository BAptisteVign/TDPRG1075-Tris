#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "ConsoleTools.h"
#include "tris.h"


int main(int argc, char* argv[]) {

	// Set localization
	setlocale(LC_ALL, "fr-FR");

	SYSTEMTIME tps = elapsedTime(true);

	tps = elapsedTime(false);
	printf("\ntemps écoulé %d:%d:%d,%03d hh:mm:ss,ms", tps.wHour, tps.wMinute, tps.wSecond, tps.wMilliseconds);

#define SIZE 4

	

	int t[SIZE] = { 3, 1, 10, 5 };

	dispTabInt(t, SIZE);

	int ret = triBulle(t, SIZE);

	dispTabInt(t, SIZE);

	return EXIT_SUCCESS;
}