#include <stdio.h>

int main(void)
{
	float principal = 40000;
	int i = 0;

	for (i = 0; i < 15; i++) {
		principal = principal * 1.1;
		printf("Amount after %d years: %f\n", i + 1, principal);
	}

	return 0;
}
