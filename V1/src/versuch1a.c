/*
 * versuch1a.c
 *
 *  Created on: 26.09.2019
 *      Author: pliss
 *
 *      Wie oft wird der Zeilenvorschub ausgegeben?
 *      - 4 mal
 *
 *      Welche Typen würden Sie für die Variablen ch, i, j verwenden?
 *      - char ch, int i, int j
 *
 *      Von welchem Typ ist der Ausdruck 65+i*8+j?
 *      - int
 */

#include <stdio.h>

int main(void){
	int i;
	char ch;
	for(i = 0; i <= 3; i++){
		int j;
		for(j = 0; j <= 7; j++)
		{
			ch = 65 + i * 8 + j;
			putchar(ch);
			putchar(ch + 0x20);
			putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}

