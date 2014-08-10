#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char* forEncrypt;
	char* encrypted;
	int T, i, j;
	int forEncryptLen;
	int encryptedLen;

	scanf("%d", &T);
	for(i = 0; i < T; i++){
		encryptedLen = 0;
		forEncrypt = (char*)calloc(101, sizeof(char));
		encrypted = (char*)calloc(101, sizeof(char));
		
		scanf("%s", forEncrypt);
		forEncryptLen = strlen(forEncrypt);

		for(j = 0; j < forEncryptLen; j = j+2)
			encrypted[encryptedLen++] = forEncrypt[j];
		for(j = 1; j < forEncryptLen; j = j+2)
			encrypted[encryptedLen++] = forEncrypt[j];
		
		encrypted[j] = NULL;
		printf("%s\n", encrypted);
		free(forEncrypt);
		free(encrypted);
	}
}