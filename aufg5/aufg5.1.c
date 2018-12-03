/*
Dieses Programm berechnet die Fakutät einer Zahl zwischen 2-10
*/
#include <stdio.h>

unsigned eingabe(void);
unsigned fakul_berechnung(unsigned int n);
void ausgabe(unsigned int zahl);


int main() {
	int zahl = 0, n = 0;
	do {
		n = 0;
		zahl = 0;
		printf("*********************************************\n");
		printf("Zahl eingeben um Fakultaet zu berechnen\n");
		printf("Geben Sie 0 ein um zu beenden!\n");
		printf("Bitte eine Zahl zwischen 2-10 eingeben: \n");

		n = eingabe();

		if (n == 0)	zahl = 0;
		else if (n >= 2 && n <= 10) {
			zahl = fakul_berechnung(n);
		}
		else printf("Falsche Eingabe\n\n\n");

		ausgabe(zahl);

	}while(n != 0);
}


/*Hier wird die Zahl eingegeben und an main zurück gegeben*/
unsigned eingabe(void) {
	int n = 0;
	scanf_s("%d", &n);

	return n;
}

/*Hier wird die Fakultät berechnet und an main zurück gegeben*/
unsigned fakul_berechnung(unsigned int n) {
	int zahl = 1;

	for (int i = 1; i <= n; i++) {
		zahl = zahl * i;
	}
	return zahl;
}

/*Hier wird die Fakultät ausgegeben*/
void ausgabe(unsigned int zahl) {
	if (zahl == 0) printf("Beenden...\n");

	else printf("Das ergebnis ist: %d\n\n", zahl);
}
