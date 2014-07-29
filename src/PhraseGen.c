/*
 ============================================================================
 Name        : PhraseGen.c
 Author      : Dallas Hoekstra
 Version     :
 Copyright   : GNU License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Source file for phraseGen
const char srcFile[] = "C:\\Users\\Anonymous\\Desktop\\TestFile.txt";

int main(void) {
	FILE *fp = fopen(srcFile, "r");

	char buffer[4096];
	while (!feof(fp)) {

	    while ( fgets(buffer, sizeof(buffer), fp) != 0)
          fputs(buffer, stdout);
	}
	fclose(fp);


	return EXIT_SUCCESS;
}
