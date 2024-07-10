# Target Sums
Given a sorted array of n distinct values as well as a target value T, determine in O(n) time whether or not there exist two distinct values in the array that sum to T. (For example, if the array contained 3, 5, 6, 7, and 9 and T = 14, then you should report that a pair of values in the array exists that adds up to T. If T = 17, you should indicate that no such pair exists.

## Input Format
The first line of the file will have a single positive integer k, representing the number of test cases in the file. Each test case will follow. The first line of each test case will have two space separated positive integers: n (n ≤ 106), the size of the array, and t (t ≤ 109), the target for the input case. The following n distinct positive integers will be listed in ascending order, separated by white space.

## Output Format
For each test case, output a line with either YES or NO depending on whether or not there exist two distinct integers in the given array that add up to the designated target.

## Sample Input
2<br>
5 14<br>
3 5 6<br>
7 9<br>
3 11<br>
1 3 6<br>

## Sample Output
YES<br>
NO<br>

## Assignment Details
Please use standard in, standard out. If you choose to submit this one (you must submit one of RP 1-4), please call your submission target.c.