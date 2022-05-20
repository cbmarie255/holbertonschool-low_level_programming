#include<stdio.h>
#include<string.h>
int main () {
	char str1[15];
	char str2[15];

	strcpy(str1, 0x22);
	strcpy(str2, "Programming is like building a multilingual puzzle");
	
	puts(str1);
        fputs(str2);
	
	return 0;
}
