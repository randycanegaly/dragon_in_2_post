#include "global.h"

#include <stdio.h>


int main (int argc, char *argv[]) {
	FILE *fp;
	
	if (argc < 2)
		printf("Usage: provide file name\n");
	else if (argc > 2)
		printf("Too many arguments provided.\n");
	else {
		//printf("Source file is named is %s.\n", *++argv);		
		if ((fp = fopen(*++argv, "r")) == NULL) {
			printf("Can't open file %s\n", *argv);	
			return 1;
		} else {
			int c;
			while((c = getc(fp)) != EOF)
				putc(c, stdout);

			fclose(fp);
		}	
	}
}
