Find the last digit of n!(factorial), which is different from zero.

Example

For n = 5, the output should be lastDigitDiffZero(n) = 2.
5! = 1 · 2 · 3 · 4 · 5 = 120.
For n = 6, the output should be lastDigitDiffZero(n) = 2.
6! =1 · 2 · 3 · 4 · 5 · 6 = 720.
For n = 10, the output should be lastDigitDiffZero(n) = 8.
10! = 3628800.
Input/output

[execution time limit] 3 seconds
[input] integer n
Guaranteed constraints:
1 ≤ n ≤ 10^6.
[output] integer




int lastDigitDiffZero(int n)
{
    int factorial = 1;
    for(int i = 2; i <= n; i++)
    {
        factorial *= i;
        while(factorial % 10 == 0)
        {
            factorial /= 10;
        }
        factorial%=100;
    }
    return factorial % 10;
}
