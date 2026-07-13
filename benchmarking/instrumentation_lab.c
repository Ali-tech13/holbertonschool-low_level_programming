#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

/**
 * next_value - Generates the next pseudo-random value
 * @state: Pointer to the current generator state
 *
 * Return: The next generated value
 */
static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

/**
 * build_dataset - Fills the dataset with generated values
 *
 * Return: Nothing
 */
static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

/**
 * process_dataset - Processes every value in the dataset
 *
 * Return: Nothing
 */
static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);

		if (v < 0)
			v = -v;

		dataset[i] = v;
	}
}

/**
 * reduce_checksum - Calculates a checksum from the dataset
 *
 * Return: The calculated checksum
 */
static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;

	for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];

	return (sum);
}

/**
 * main - Measures the execution time of dataset operations
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long checksum;
	clock_t total_start;
	clock_t total_end;
	clock_t build_start;
	clock_t build_end;
	clock_t process_start;
	clock_t process_end;
	clock_t reduce_start;
	clock_t reduce_end;
	double total_seconds;
	double build_seconds;
	double process_seconds;
	double reduce_seconds;

	total_start = clock();

	build_start = clock();
	build_dataset();
	build_end = clock();

	process_start = clock();
	process_dataset();
	process_end = clock();

	reduce_start = clock();
	checksum = reduce_checksum();
	reduce_end = clock();

	total_end = clock();

	total_seconds = (double)(total_end - total_start) / CLOCKS_PER_SEC;
	build_seconds = (double)(build_end - build_start) / CLOCKS_PER_SEC;
	process_seconds =
		(double)(process_end - process_start) / CLOCKS_PER_SEC;
	reduce_seconds =
		(double)(reduce_end - reduce_start) / CLOCKS_PER_SEC;

	if (checksum == 0ul)
		printf("impossible\n");

	printf("TOTAL seconds: %f\n", total_seconds);
	printf("BUILD_DATA seconds: %f\n", build_seconds);
	printf("PROCESS seconds: %f\n", process_seconds);
	printf("REDUCE seconds: %f\n", reduce_seconds);

	return (0);
}
