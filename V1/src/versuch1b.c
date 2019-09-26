/*
 * versuch1b.c
 *
 *  Created on: 27.09.2019
 *      Author: pliss
 *
 *      ASCII-Zeichen 127(dezimaler Wert) entspricht DEL
 *
 *      0 bis 32 und DEL sind keine darstellbaren ASCII-Zeichen
 */


#include <stdio.h>

int main(void){
	int i = 0;
	char ch;
	while(i < 4){
		int j = 0;
		while(j < 8)
		{
			ch = 65 + i * 8 + j;
			if(ch >= 65 && ch <= 90){
				putchar(ch);
				putchar(ch + 0x20);
				putchar(' ');
			}
			else
				putchar(' ');
			j++;
		}
		putchar('\n');
		i++;
	}

	return 0;
}
