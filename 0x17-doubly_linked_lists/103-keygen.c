#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int loop_index, loop_sum, loop_product, max_char, random_seed;
	size_t username_length, sum_ascii;
	char *charset;
	char key[7] = "      ";

*charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return 1
	}

	username_length = strlen(argv[1]);
	key[0] = charset[(username_length ^ 59) & 63];
}
