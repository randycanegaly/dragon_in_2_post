#include "global.h"

void parse (char *source) {
	FILE *fp;
	
	if ((fp = fopen(source, "r")) == NULL) {
		printf("Can't open file %s\n", source);	
		exit(1);
	} else {
		int c;
		while((c = getc(fp)) != EOF)
		putc(c, stdout);

		fclose(fp);
	}	
}
