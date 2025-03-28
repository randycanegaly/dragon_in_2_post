//lexer

#include "global.h"

int lexan(char *source) {
	char lexbuf[BUFSIZE];
	char c, line_num;
	int result;
	FILE *fp;

	line_num = 0;

	if ((fp = fopen(source, "r")) == NULL) {
		printf("Can't open file %s\n", source);
		exit(1);
	} else {
		while((c = getc(fp)) != EOF && c != ' ' && c != '\t') {
			if (c == '\n') {
				line_num++;
				printf("line number: %d\n", line_num);
			}
			else if (isdigit(c)) {
				printf("see a digit\n");
				result = NUM;
			}
			else {
				printf("see an error\n");
				result = LEX_ERR;
			}
			
			//putc(c, stdout);
		}
		fclose(fp);
		return result;
	}
}
