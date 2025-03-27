#include "global.h"
#include "parser.h"

int main (int argc, char *argv[]) {
	FILE *fp;
	
	if (argc < 2)
		printf("Usage: provide file name\n");
	else if (argc > 2)
		printf("Too many arguments provided.\n");
	else {
		parse(*++argv);
	}
}
