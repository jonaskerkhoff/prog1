/*
Dieses Programm berechnet die Fakutät einer Zahl zwischen 2-10
*/
#include <stdio.h>

unsigned eingabe(void);
unsigned fakul_berechnung(unsigned int n);
void ausgabe(unsigned int zahl);


int main() {
	eingabe();
}

unsigned eingabe(void) {
	int n = 0;
	printf("Zahl eingeben um Fakultaet zu berechnen\n");
	printf("Geben Sie 0 ein um zu beenden!\n");
	printf("Bitte eine Zahl zwischen 2-10 eingeben: \n");

	scanf_s("%d", &n);
	if (n == 0) return 0;
	if (n < 2) {
		printf("Die Zahl ist zu klein!\n\n");
		main();
	}
	else if (n > 10) {
		printf("Die Zahl ist zu gross!\n\n");
		main();
	}
	else fakul_berechnung(n);
}

unsigned fakul_berechnung(unsigned int n) {
	int zahl = 1;

	for (int i = 1; i <= n; i++) {
		zahl = zahl * i;
	}
	ausgabe(zahl);
}

void ausgabe(unsigned int zahl) {
	printf("Das ergebnis ist: %d\n\n", zahl);
	main();
}