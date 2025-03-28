#include "global.h"
#include "lexer.h"

void parse (char *source) {
	int result = lexan(source);
	printf("lexan returned %d\n", result);
}
