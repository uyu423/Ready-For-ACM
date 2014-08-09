#include <stdio.h>

int main() {

	int max;
	char tmp[200];

	scanf("%d", &max);

	while(max--) {
		scanf("%s", tmp);
		printf( "Hello, %s!\n", tmp);
	}

}

