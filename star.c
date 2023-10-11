int main()
{
	int size = 5;
	top(size);
	middle_t(size);
	middle_b(size);
	bottom(size);
	return 0;
}

void top(int size)
{
	if (size % 2 != 0) {
		for (int i = 0; i != size * 2 + size; i++)
			printf(" ");
		printf("*\n");
	}
	for (int i = 0; i != size - 1; i++) {
		for (int a = 0; a != 3 * size - i - 1; a++)
			printf(" ");
		printf("*");
		for (int a = 0; a != i * 2 + 1; a++)
			printf(" ");
		printf("*\n");
	}
}

void middle_t(int size)
{
	for (int i = 0; i != size * 2; i++)
		printf("*");
	for (int i = 0; i != size * 2; i++)
		printf(" ");
	for (int i = 0; i != size * 2; i++)
		printf("*");
	printf("\n");

	for (int i = 0; i != size - 1; i++) {
		for (int a = 0; a != i; a++)
			printf(" ");
		printf("*");
		for (int a = 0; a != size * 6 - i * 2; a++)
			printf(" ");
		printf("*\n");
	}
}

void middle_b(int size)
{
	for (int i = 0; i != size - 1; i++) {
		for (int a = 0; a != size - i - 2; a++)
			printf(" ");
		printf("*");
		for (int a = 0; a != size * 4 + i * 2 + 3; a++)
			printf(" ");
		printf("*\n");
	}

	for (int i = 0; i != size * 2; i++)
		printf("*");
	for (int i = 0; i != size * 2; i++)
		printf(" ");
	for (int i = 0; i != size * 2; i++)
		printf("*");
	printf("\n");
}

void bottom(int size)
{
	for (int i = 0; i != size - 1; i++) {
		for (int a = 0; a != 2 * size + i + 1; a++)
			printf(" ");
		printf("*");
		for (int a = 0; a != size * 2 - i * 2 - 3; a++)
			printf(" ");
		printf("*\n");
	}
	if (size % 2 != 0) {
		for (int i = 0; i != size * 2 + size; i++)
			printf(" ");
		printf("*\n");
	}
}
