#include <stdio.h>
#include <stdlib.h>
#include "aes.h"

int main () {
	printf("Please input the plaintext (length: 16 characters): ");
	unsigned char p[16];
	gets(p);

	//SubBytes
	unsigned char s[17] = {'\0'};
	for ( int i = 0; i < 16; i++) {
		s[i] = sbox[p[i]];
	}

	printf("The encryped text after SubBytes (in Hexdecimal): \n");
	for (int i = 0; i < 16; i++) {
		printf("%04x\n", s[i]);
	}	


	//ShiftRows
	unsigned char temp;

	temp = s[4];
	s[4] = s[5];
	s[5] = s[6];
	s[6] = s[7];
	s[7] = temp;
	
	temp = s[8];
	s[8] = s[10];
	s[10] = temp;
	temp = s[9];
	s[9] = s[11];
	s[11] = temp;

	temp = s[12];
	s[12] = s[15];
	s[15] = s[14];
	s[14] = s[13];
	s[13] = temp;

	printf("The encryped text after SubBytes and ShiftRows (in Hexdecimal): \n");
	for (int i = 0; i < 16; i++) {
		printf("%04x\n", s[i]);
	}

	return 0;
}
