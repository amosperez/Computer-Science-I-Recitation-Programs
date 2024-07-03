// Amos Perez
// 06/24/2024
// Arup Gupta's Computer Science I Recitation Programs
#include <stdio.h>
#include <stdlib.h>

#define MAX 10000
#define PRINT 1

int *prime_number_generator();
FILE *openFile(char filepath[], char filemode[]);

int prime_sum(int n, int *prime_number_array)
{
    int prime_sum = 0;

    for (int i = 0; i < n; i++)
        prime_sum += prime_number_array[i];

    return prime_sum;
}

int main()
{
    int *prime_number_array;
    prime_number_array = prime_number_generator();

    FILE *sample_in = openFile("./sample-test.in", "r");
    FILE *my_out = openFile("./my-test.out", "r+");

    int number_of_test_cases;
    fscanf(sample_in, "%d", &number_of_test_cases);

    int test_case_input;
    int test_case_output;
    for (int i = 0; i < number_of_test_cases; i++)
    {
        fscanf(sample_in, "%d", &test_case_input);
        test_case_output = prime_sum(test_case_input, prime_number_array);
        fprintf(my_out, "%d\n", test_case_output);
    }

    return 0;
}

// prime_number_generator was mostly written by Arup Guha with some lines added written by Amos Perez.
// Arup Guha - 2/18/2014 - Sieve of Eratosthenes: http://www.cs.ucf.edu/courses/cot3100/spr2014/extranotes/Feb20-14/sieve.c
int *prime_number_generator()
{

    // Allocate our array for the sieve.
    int *isPrime = malloc(sizeof(int) * (MAX + 1));
    int i, j;

    // Set each value to be prime, initially.
    for (i = 0; i <= MAX; i++)
        isPrime[i] = 1;

    // For accuracy's sake.
    isPrime[0] = 0;
    isPrime[1] = 0;

    // Iterate through each number on the chart.
    for (i = 2; i <= MAX; i++)
    {
        // We only need to cross off multiples of i, if i is prime.
        if (isPrime[i])
        {
            // These multiples of i are NOT prime.
            for (j = 2 * i; j <= MAX; j += i)
                isPrime[j] = 0;
        }
    }

    //// Print out, if the print flag is on.
    // if (PRINT)
    // {
    //     for (i = 0; i <= MAX; i++)
    //         if (isPrime[i])
    //             printf("%d ", i);
    //     printf("\n");
    // }

    // Count primes.
    int numPrimes = 0;
    for (i = 0; i <= MAX; i++)
        if (isPrime[i])
            numPrimes++;

    // Allocate our array for prime only numbers. Added by Amos Perez.
    int *prime_number_array = malloc(sizeof(int) * (numPrimes));

    // Set each value to prime numbers. Added by Amos Perez.
    int k = 0;
    for (i = 0; i <= MAX; i++)
        if (isPrime[i])
            prime_number_array[k++] = i;

    //// We'll always print this out.
    // printf("There are %d primes <= %d.\n", numPrimes, MAX);

    free(isPrime);
    // return 0;

    return prime_number_array; // Added by Amos Perez.
}

FILE *openFile(char filepath[], char filemode[])
{
    FILE *file = fopen(filepath, filemode);
    if (file != NULL)
        printf("\"%s\" is open in \"%s\" mode.\n", filepath, filemode);
    else
    {
        printf("\"%s\" failed to open.\n", filepath);
        exit(1);
    }
    return file;
}