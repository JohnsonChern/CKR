#include "stdio.h"

#define INSPACE 	1
#define OUTSPACE 	0

int main(int argc, char const *argv[])
{

	int status, c;

	status = OUTSPACE;
	while ((c = getchar()) != EOF) {
		if (status == INSPACE) {
			if (c == ' ') {
				continue;
			}
			else {
				status = OUTSPACE;
			}
		}
		else if (c == ' ') {
			status = INSPACE;
		}
		putchar(c);
	}

	return 0;

}