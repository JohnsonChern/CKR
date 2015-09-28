#include "stdio.h"

int main(int argc, char const *argv[])
{
	int c;

	while (c = getchar() != EOF)
		printf("%d", c);

	printf("%d\n", c);

	return 0;

}