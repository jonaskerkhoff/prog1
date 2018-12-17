#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


double eingabeZahl(void);
int eingabeRechenart(void);
double quadratwert(double zahl);
double reziprokwert(double zahl);
void ausgabe(double bZahl, int art);

int main() {
	double zahl, bZahl;
	int art;

	printf("Geben Sie eine Zahl ein:\n");
	zahl = eingabeZahl();

	printf("Geben Sie 1 ein fuer Quadratwert oder 2 fuer Reziprokwert:\n");
	art = eingabeRechenart();

	if (art == 1) bZahl = quadratwert(zahl);
	else if (art == 2) bZahl = reziprokwert(zahl);
	else printf("Falsche Zahl");
	ausgabe(bZahl, art);
}

double eingabeZahl() {
	double zahl;
	scanf("%lf", &zahl);
	return zahl;
}

int eingabeRechenart() {
	int art = 0;
	scanf("%i", &art);
	return art;
}

double quadratwert(double zahl) {
	double bzahl;
	bzahl = zahl*zahl;
	return bzahl;
}

double reziprokwert(double zahl) {
	double bzahl;
	bzahl = 1/zahl;
	return bzahl;
}

void ausgabe(double bZahl, int art) {
	if (art == 1) printf("Der Quardratwert ist: %lf\n", bZahl);
	else if (art == 2) printf("Der Reziprokwert ist: %lf\n", bZahl);
	
}
