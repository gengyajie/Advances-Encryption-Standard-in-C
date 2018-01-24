# Advances-Encryption-Standard-in-C
This program implements two layers (SubBytes and ShiftRows) of AES algorithm in C.

## Files
* aes.h: includes the initial S-Box for SubBytes layer
* aes.c: implements the SubBytes and ShiftRows
* Makefile

## Compile and Run
* To compile, run "make".
* After compiling, run "./aes".
* After running, input the plaintext to be encryped following the instructions.

## Note
Since the output encypted text generally includes characters that do not have corresponding symbols in ASCII, the output ciphertext is displayed in Hexdecimal format.
