#include "stdio.h"

int main(int argc, char const *argv[])
{

	int nspace, ntab, nenter;
	int c;
	
	nspace = 0;
	ntab   = 0;
	nenter = 0;

	while ((c = getchar()) != EOF) {

		if (c == ' ')
			++nspace;
		if (c == '\n')
			++nenter;
		if (c == '\t')
			++ntab;

	}

	printf("%d %d %d\n", nspace, ntab, nenter);

	return 0;

}