# Prime Sum

http://www.cs.ucf.edu/~dmarino/ucf/transparency/cop3502/recprogs/primesum.pdf

Let P(n) denote the sum of the first n prime numbers. For example, P(1) = 2 and P(3) = 10, since
the first three prime numbers are 2, 3 and 5, respectively. Write a program to determine the value
of the function P(n) for different values of n. The first few prime sums are 2, 5, 10, 17, 28, 41, 58 and 77.

## Input

The first line of the input file contains a single positive integer, t (t ≤ 20000), representing the number of test cases. The following t lines contain one positive integer n (n ≤ 10000), representing the prime sum to be computed for the case.

## Output

Write out a single integer on a line by itself for each test case, indicating P(n), for the corresponding input value n.

## Sample Input<br>

3<br>
1<br>
6<br>
8<br>

## Sample Output<br>

2<br>
41<br>
77<br>

## Assignment Details

Even though this assignment can be coded with statically allocated arrays, please write your
solution using dynamically allocated arrays. (Your programs should have either malloc/calloc
calls, as well as a call to free.) In order to efficiently generate the first 10000 primes, please use the Sieve of Eratosthenes. From there, just generate each of the prime sums instead of recomputing for each test case.
