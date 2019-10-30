Given a natural number n. Find the number of zeros at the end of n! (n! is the product of continuous integers from 1 to n)

For example:

If n = 5, n! = 1*2*3*4*5 = 120, so numberZeroDigits(n) = 1
Input/output:

Input:
A natural number n (1 <= n <= 10^12).
Output:
Number of zeros at the end of n!
Execution time limit: 0.5 seconds




long long numberZeroDigits(long long n)
{
    if(n < 5) return 0;
    long long count = 0;
    long long i = 1;
    while(pow(5, i) <= n)
    {
        count += n/pow(5, i);
        i++;
    }
    return count;
}
