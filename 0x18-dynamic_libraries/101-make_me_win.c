#include <stdlib.h>

void init(void) __attribute__((constructor));

void init(void)
{
	system("echo '9 8 10 24 75 9' > /tmp/numbers");
}
