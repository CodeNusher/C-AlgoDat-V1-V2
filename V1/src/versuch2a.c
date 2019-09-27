/*
 * versuch2a.c
 *
 *  Created on: 27.09.2019
 *      Author: pliss
 */


#include <stdio.h>

int main(void){

	int ch;
	for(ch = 65; ch <= 96; ch++){
		if((ch-65) % 8 == 0){
			putchar('\n');
		}
		else{
			if(ch < 65 || ch > 90){
				putchar(ch);
				putchar(' ');
				putchar(' ');
			}
			else{
				putchar(ch);
				putchar(ch + 0x20);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return 0;
}
