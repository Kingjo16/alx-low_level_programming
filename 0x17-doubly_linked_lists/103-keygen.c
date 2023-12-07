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

    for (loop_index = 0, sum_ascii = 0; loop_index < username_length; loop_index++)
        sum_ascii += argv[1][loop_index];
    key[1] = charset[(sum_ascii ^ 79) & 63];

    for (loop_index = 0, loop_product = 1; loop_index < username_length; loop_index++)
        loop_product *= argv[1][loop_index];
    key[2] = charset[(loop_product ^ 85) & 63];

    for (max_char = argv[1][0], loop_index = 0; loop_index < username_length; loop_index++)
        if ((char)max_char <= argv[1][loop_index])
            max_char = argv[1][loop_index];
    srand(max_char ^ 14);
    key[3] = charset[rand() & 63];

    for (loop_sum = 0, loop_index = 0; loop_index < username_length; loop_index++)
        loop_sum += argv[1][loop_index] * argv[1][loop_index];
    key[4] = charset[(loop_sum ^ 239) & 63];

    for (random_seed = 0, loop_index = 0; (char)loop_index < argv[1][0]; loop_index++)
        random_seed = rand();
    key[5] = charset[(random_seed ^ 229) & 63];

    printf("%s\n", key);
    return 0;
}

