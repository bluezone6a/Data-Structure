#include<stdio.h>
#define abcSize 3
#define smallLetterInitial 97 

int main() {

	int i, a = 2, b = 3, c = 4;
	int* abc[abcSize] = { &a, &b, &c };

	for (i = 0; i < abcSize; i++) {
		printf(" %c :  %d", smallLetterInitial + i, *abc[i]);
		if (i != abcSize-1) putchar(',');
	}
	
	putchar('\n');

	return 0;
}
