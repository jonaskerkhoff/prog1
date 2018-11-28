#include <stdio.h>

int main() {
	char eingabe[20];
	int i, zahl, fehler;

	printf("Zahl eingeben: ");
	scanf("%s", eingabe);

	fehler = 0;
	zahl = 0;

	for (i = 0; i < 20 && eingabe[i] != '\0'; i++) {
		if ('0' <= eingabe[i] && '9' >= eingabe[i]) {
			zahl += ((int)eingabe[i] -'0');
		}
		else {
			fehler = 1;
		}
	}

	if (fehler == 0 && (zahl % 3) == 0) {
		printf("Die Quersumme (%d) ist durch 3 teilbar.", zahl);
	}
	else if (fehler == 0) {
		printf("Die Ziffer ist nicht durch drei teilbar");
	}
	else {
		printf("Nur Zahlen eingaben");
	}
	printf("\n");
}
