/*
 * versuch1b.c
 *
 *  Created on: 27.09.2019
 *      Author: pliss
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
